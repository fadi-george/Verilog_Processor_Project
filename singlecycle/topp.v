`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Fadi George - 814549301
// Single Cycle Datapath 
//	
//	Works for LW , SW , R - Type , beq , and j instuctions
//
//////////////////////////////////////////////////////////////////////////////////
module topp #(parameter N = 5, M = 32)(input CLK , RST); // Clock signal, reset signal

wire Zro , pcSrc , MemtoReg , MemWrite , Branch , ALUSrc , RegDst , RegWrite, Jump;	// Control Signals

wire [1:0] ALUOp;			// Operation to be decode
wire [2:0] ALUControl;	// Operation to be performed by ALU																       											
wire [N-1:0] wrReg;		// Address to use for writing to register file

wire [M-1:0] inst , rd1 , rd2 , Simm , aluRess , ReadD , aluin , goReg , oldpc , newpc , pcplus ,  pcBrch , pass;	// Address or Data


//*********** Program Counter *****************************************************************//
//*********************************************************************************************//
pc #(M)       UU1 (CLK , RST , oldpc ,newpc); 	// Take new addres on the posedge of the CLK   //
add2 #(M) 	  AU1 (newpc , 1 , pcplus);		 	// Adds to current PC's address					  //
//*********************************************************************************************//

//********** Instruction Memory ***************************************************************//
//*********************************************************************************************//		
iMem #(N,M)   UU2 (newpc , inst);		   // Fetch instruction from memory using PC's address  //
//*********************************************************************************************//

//********** Control Unit ***********************************************************************************************************************************//
//***********************************************************************************************************************************************************//		
ALUMainDec    CU1 (inst[31:26] , MemtoReg , MemWrite , Branch , ALUSrc , RegDst , RegWrite , Jump , ALUOp); // Determine signals to send based on the opcode //
ALUDec        CU2 (inst[5:0] , ALUOp , ALUControl);														  // Determine ALU's operation using op signal ALU Main Decoder //
//***********************************************************************************************************************************************************//

//********** Register File ***********************************************************************************************************************************//
//************************************************************************************************************************************************************//				
rFile #(N,M)  UU3 (CLK , RegWrite , inst[25:21] , inst[20:16] ,  wrReg , goReg , rd1 , rd2); // Read data from the register file / write to the register file // 
mux2to1 #(N)  MU3 (inst[20:16] , inst[15:11] , RegDst , wrReg);										// MUX for determining destination address for write operation	  //
//************************************************************************************************************************************************************//		

//********** Sign Extend **********************************************************************//
//*********************************************************************************************//		
signExtend #(16,M) UU4 (inst[15:0] , Simm);		  // Sign extends the offset						  //													
mux2to1 #(M)  MU1 (rd2 , Simm , ALUSrc , aluin);  // Mux to control what goes into the ALU	  //												  
//*********************************************************************************************//

//********** ALU ******************************************************************************//
//*********************************************************************************************//
ALU #(M) 	  UU5 (rd1 , aluin , ALUControl , Zro , aluRess); // Peform operations on data	  //
and GU1 (pcSrc , Zro , Branch);						 // Determines if a branch should be taken	  //
//*********************************************************************************************//

//********** Data Memory ********************************************************************************************//
//*******************************************************************************************************************//
dMem #(M)     UU6 (CLK , MemWrite , aluRess , rd2 , ReadD);	// Reads data from ALU's address / Write to the memory   //
mux2to1 #(M)  MU2 (aluRess , ReadD , MemtoReg , goReg);		// Mux to control what data to pass to the register file //
//*******************************************************************************************************************//

//********** PC Update **********************************************************************************************//
//*******************************************************************************************************************//
add2 #(M) 	  AU2 (pcplus , Simm , pcBrch);   	   // Determines address for PC Branch by adding offset with PC + 1  //
mux2to1 #(M)  MU4 (pcplus , pcBrch , pcSrc , pass);				     // Determines if branch address should be passed // 
mux2to1 #(M)  MU5 (pass , {pcplus[31:26],inst[25:0]} , Jump , oldpc);  // Determines if jump address should be taken //
//*******************************************************************************************************************//

endmodule
