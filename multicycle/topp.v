`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Fadi George - 814549301
// Multicycle Cycle Datapath 
//	
//	Works for LW , SW , R - Type , beq , and j instuctions
//
//////////////////////////////////////////////////////////////////////////////////
module topp #(parameter N = 5, M = 32)(input CLK , RST); // Clock signal, reset signal

wire Zro , MemtoReg , RegDst , Branch , RegWrite, Jump;				// Control Signals
wire MemWrite , IRWrite , IorD , ALUSrcA , b1 , PCWrite , PCEn;

wire [1:0] ALUOp , ALUSrcB , PCSrc; // Operation to be decode
wire [2:0] ALUControl;					// Operation to be performed by ALU																       											

wire [N-1:0] wrReg;					 	// Address to use for writing to register file
wire [M-1:0] oldpc , newpc , Data , goReg , Adr , RD , R1 , R2 , D1, Instr , rd1 , rd2 , A , B , Simm , SrcA , SrcB , aluRess , ALUOut;

//*********** Program Counter *****************************************************************************//
//*********************************************************************************************************//
pc #(M)       UU1 (CLK , RST , PCEn , oldpc , newpc);  // Take new addres on the posedge of the CLK        //
//*********************************************************************************************************//

//********** Instruction Memory ***************************************************************************//
//*********************************************************************************************************//
mux2to1 #(M)  MU1 (newpc , ALUOut , IorD , Adr);       // Choose address to fetch from the Instr/Data Mem  //                                                   
IDMem #(N,M)  UU2 (CLK , MemWrite ,  Adr , B , RD);	 // Fetch instruction or Write Data				    	  //
iReg #(M) 	  RU1 (CLK , IRWrite ,  RD , Instr);		 // Pass Instruction				                       //
dReg #(M)     RU2 (CLK , RD , Data);						 // Pass Data											   	  //
//*********************************************************************************************************//

//********** Register File *************************************************************************************************************************************//
//**************************************************************************************************************************************************************//				
rFile #(N,M)  UU3 (CLK , RegWrite , Instr[25:21] , Instr[20:16] ,  wrReg , goReg , rd1 , rd2);  // Read data from the register file/write to the register file  // 
mux2to1 #(N)  MU2 (Instr[20:16] , Instr[15:11] , RegDst   , wrReg);										// MUX for determining destination address for write operation	 //
mux2to1 #(M)  MU3 (ALUOut 		  , Data         , MemtoReg , goReg);										// Mux to control what data to pass to the register file			 //
dualReg #(M)  RU3 (CLK , rd1 , rd2 , A , B);                                                    // Have data from src's get passed through a register           //
//**************************************************************************************************************************************************************//

//********** Sign Extend **********************************************************************************//
//*********************************************************************************************************//		
signExtend #(16,M) UU4 (Instr[15:0] , Simm);		       // Sign extends the offset						  		  //										
//*********************************************************************************************************//

//********** ALU *****************************************************************************************************************//
//********************************************************************************************************************************//
mux2to1 #(M)  MU4 (newpc , A , ALUSrcA , SrcA);           					 			 // pass either PC address or data from Src reg  //
mux4to1 #(M)  MU5 (B , 1 , Simm , Simm , ALUSrcB , SrcB);								 // Determine other input to go into the ALU 	 //
ALU #(M) 	  AU1 (SrcA , SrcB , ALUControl , Zro , aluRess); 							 // Peform operations on ALU's inputs        	 //
dReg #(M)     RU4 (CLK , aluRess , ALUOut);						  						    // Have ALU result go through a register    	 // 
mux3to1 #(M)  MU6 (aluRess , ALUOut , {newpc[31:26],Instr[25:0]}, PCSrc , oldpc); // Determine address to Pass into 					 //
//********************************************************************************************************************************//

//********** Branch ***************************************************************************************//
//*********************************************************************************************************//
and BU1 (b1 , Zro , Branch);						    		 // Determines if a branch should be taken	        //
or  BU2 (PCEn , PCWrite , b1);																									  //
//*********************************************************************************************************//

//********** Control Unit **************************************************************************************************************************************//
//**************************************************************************************************************************************************************//		
ALUMainDec    CU1 (CLK , RST , Instr[31:26] , MemtoReg , RegDst , IorD , PCSrc , ALUSrcA , ALUSrcB , IRWrite , MemWrite , PCWrite , Branch , RegWrite , ALUOp); // 
ALUDec        CU2 (Instr[5:0] , ALUOp , ALUControl);	// Determine ALU's operation using op signal ALU Main Decoder  													    //
//**************************************************************************************************************************************************************//

endmodule
