`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
//	Fadi George - 814549301
// Pipeline Procesor Data Path 
//	
//	Works for LW , SW , R - Type , beq , and j instuctions
//
//////////////////////////////////////////////////////////////////////////////////

module topp #(parameter N = 5, M = 32)(input CLK , RST); 												// Clock signal, reset signal

wire ForwardAD , ForwardBD , jump , jrD , BranchNED , PCSrc2D;
wire StallF;
wire PCSrcD , StallD , RegWriteD , MemWriteD , ALUSrcD , BranchD , EqualD;
wire FlushE , RegWriteE , MemWriteE , ALUSrcE;
wire RegWriteM , MemWriteM;
wire RegWriteW;

wire [1:0] ForwardAE , ForwardBE , RegDstD , RegDstE;
wire [1:0] MemtoRegD , MemtoRegE , MemtoRegM  , MemtoRegW;

wire [2:0] ALUOp;

wire [4:0] ALUControlD; 
wire [4:0] ALUControlE;

wire [M-1:0] inst , rd1 , rd2 , PCp , PCF , PCPlus1F , pass , PCJ;
wire [M-1:0] PCBranchD , InstrD , PCPlus1D , SignImmD , co1 , co2;
wire [M-1:0] RE1 , RE2 , SignImmE , SrcAE , SrcBE , WriteDataE , aluRess , PCPlus1E;
wire [M-1:0] ALUOutM , WriteDataM , RDM , PCPlus1M;
wire [M-1:0] ReadDataW , ALUOutW , ResultW , PCPlus1W;

wire [N-1:0] ShE;
wire [N-1:0] WriteRegE , RsE , RtE , RdE;
wire [N-1:0] WriteRegM;
wire [N-1:0] WriteRegW;

//**   FETCH STAGE    ************************************************************************************************************************************************************
//********************************************************************************************************************************************************************************

mux2to1 #(M)  	     MU1 (PCPlus1F , PCBranchD , (PCSrcD | PCSrc2D) , pass); 		 							// Determines if jump address should be taken 
mux2to1 #(M) 		  MU9 (pass , {PCPlus1D[31:26],InstrD[25:0]} , jump , PCp);  								// Determines if jump address should be taken
mux2to1 #(M)        MU10 (PCp , rd1 , jrD , PCJ);

PC      #(M)        UUU (CLK , StallF , PCJ , PCF);
add2    #(M)        AA1 (PCF , 1 , PCPlus1F);																							

iMem #(N,M)  	  	  UU2 (PCF , inst);		   														 				             	// Fetch instruction from memory using PC's address  
DecodeReg #(M,M)    PP1 (CLK , StallD , (PCSrcD | PCSrc2D | jump | jrD) , inst , PCPlus1F , InstrD , PCPlus1D);	// Register the instruction and PCPlus1

//*********************************************************************************************************************************************************************************



//**   DECODE STAGE    ***********************************************************************************************************************************************************
//********************************************************************************************************************************************************************************

rFile #(N,M) 		  UU3 (CLK , RegWriteW , InstrD[25:21] , InstrD[20:16] ,  WriteRegW , ResultW , rd1 , rd2); // Read data from the register file / write to the register file  
mux2to1 #(M)		  MU2 (rd1 , ALUOutM , ForwardAD , co1);										 							  // Data forwarding for decode state
mux2to1 #(M)		  MU3 (rd2 , ALUOutM , ForwardBD , co2);	
Compar  #(M)        HU2 (co1 , co2 , EqualD);																					  // Determines if source register values are equal	
and					  HU3 (PCSrcD , BranchD , EqualD);						                                         // Determines if a branch should be taken (beq)	  
and                 HU4 (PCSrc2D , BranchNED , (~EqualD));  						 										  // Determines if a branch should be taken (bne)				
signExtend #(16,M)  UU4 (InstrD[15:0] , SignImmD);		  																		  // Sign extends 16-bit value to a 32-bit value 					  													
add2 #(M) 	 		  AU2 (PCPlus1D , SignImmD , PCBranchD);   	  															  // Add immediate value to PC + 1 	 
ExecuteReg #(M,N)   PP2 (CLK , FlushE , rd1 , rd2 , SignImmD , InstrD[25:21] , InstrD[20:16] , InstrD[15:11] , InstrD[10:6] , PCPlus1D , RE1 , RE2 , SignImmE , RsE , RtE , RdE , ShE , PCPlus1E);								 
// Decode to Execute register, clears the pipeline if it needs to flush
//*********************************************************************************************************************************************************************************



//**   EXECUTE STAGE    **********************************************************************************************************************************************************
//********************************************************************************************************************************************************************************

mux3to1 #(N)		  MU4 (RtE , RdE , 5'b11111 , RegDstE , WriteRegE);										// MUX for determining destination address for write operation	  
mux3to1 #(M) 		  MU5 (RE1 , ResultW , ALUOutM , ForwardAE , SrcAE);								      // Determine which value to forward to the ALU
mux3to1 #(M) 		  MU6 (RE2 , ResultW , ALUOutM , ForwardBE , WriteDataE);								// (forward from writeback , memory , or keep rd1s value
mux2to1 #(M)		  MU7 (WriteDataE , SignImmE , ALUSrcE , SrcBE);										   // Determine if value from immediate or forwarded value
ALU 	  #(M,N) 	  UU5 (SrcAE , SrcBE , ALUControlE , ShE , aluRess); 										// Arithmetic Logical Unit to peform various operations on inputs
MemoryReg #(M,N)    PP3 (CLK , aluRess , WriteDataE , WriteRegE , PCPlus1E , ALUOutM , WriteDataM , WriteRegM , PCPlus1M);									 

//********************************************************************************************************************************************************************************



//**   MEMORY STAGE    ***********************************************************************************************************************************************************
//********************************************************************************************************************************************************************************

dMem #(M , 55)     		  UU6 (CLK , MemWriteM , ALUOutM , WriteDataM , RDM);							                              // Parametric data memory 
WriteBackReg #(M,N)       PP4 (CLK , RDM , ALUOutM , WriteRegM , PCPlus1M , ReadDataW , ALUOutW , WriteRegW , PCPlus1W);		// Memory to Writeback register						 

//********************************************************************************************************************************************************************************



//**   WRITEBACK STAGE    ********************************************************************************************************************************************************
//********************************************************************************************************************************************************************************

mux3to1 #(M)		  MU8 (ALUOutW , ReadDataW , PCPlus1W , MemtoRegW , ResultW);								// Select which address to write register value into							  

//********************************************************************************************************************************************************************************



//**   CONTROL UNIT    ***********************************************************************************************************************************************************
//********************************************************************************************************************************************************************************		

ALUMainDec      	  CU1 (InstrD[31:26] , MemtoRegD , MemWriteD , BranchD , BranchNED , ALUSrcD , RegDstD , RegWriteD , jump , ALUOp); 						    // Determine signals to send based on the opcode 
ALUDec     	    	  CU2 (InstrD[5:0] , ALUOp , ALUControlD , jrD);														 						 									 // Determine ALU's operation using op signal ALU Main Decoder 
ControlE            CS1 (CLK , FlushE , RegWriteD , MemtoRegD , MemWriteD , ALUControlD , ALUSrcD , RegDstD , RegWriteE , MemtoRegE , MemWriteE , ALUControlE , ALUSrcE , RegDstE);  
ControlM            CS2 (CLK , RegWriteE , MemtoRegE , MemWriteE , RegWriteM , MemtoRegM , MemWriteM);
ControlW				  CS3 (CLK , RegWriteM , MemtoRegM , RegWriteW , MemtoRegW);
// Control registers 
//***********************************************************************************************************************************************************//



//**   HAZARD UNIT    ************************************************************************************************************************************************************
//********************************************************************************************************************************************************************************		
HazardUnit          HU1 (BranchD , InstrD[25:21] , InstrD[20:16] , RsE , RtE , WriteRegE , MemtoRegE , RegWriteE , MemtoRegM , WriteRegM , RegWriteM , WriteRegW , RegWriteW , StallF , StallD , ForwardAD , ForwardBD , FlushE , ForwardAE , ForwardBE);
// Determines if forwarding needs to happen
endmodule
