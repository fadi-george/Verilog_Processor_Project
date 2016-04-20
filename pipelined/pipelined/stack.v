`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//		Fadi George
//----------------------------------
//		COMPE 470	HW ASSIGNMENT 5
//----------------------------------
//
//		STACK MODULE (WL bits wide and N bits deep):
//
//		This design constructs a stack of memory with two operations (push and pop). A stackpointer "sp"
//		is used to keep track of the top most element in the stack. When a push signal is high, the item to be 
//		pushed will be placed ontop of the stack and the stackpointer will increment. If the stack gets filled up,
//		an output signal "full" will go high. Likewise, if the stack is empty then an "empty" signal will go high.
//		If push operations continue for a filled stack, then an "error" signal will go high and the stackpointer will
//		stay at the same value it had before. It is a similar case if a pop operation happens on an empty stack.
//		With pop operations, items on the top of the stack get removed (and zero fills the void) and the stackpointer 
//		gets decremented and the item removed will get placed into a register "data." If a "reset" signal goes high,
//		then the stackpointer will reset back to zero as well other control signals.
//
//////////////////////////////////////////////////////////////////////////////////
module stack #(parameter N = 32 , WL  = 32) (input CLK , push , pop , RESET ,	// clock signal , push and pop operation, reset signal
														   input [WL - 1:0] dio,					// data to be placed onto the stack
														   output reg [4:0] sp,				// stackpointer to keep track of top most element
														   output reg full , empty , error,	// output signals (full stack, empty stack, error )
														   output reg [WL - 1:0] data);			// register to hold popped value 

reg [WL - 1:0] memm [0 : N - 1];	// stack of memory
integer i;								

always @(posedge CLK) begin		// synchronous memory

	if( RESET == 1 )begin			// reset is high
		sp <= 0;							// reset stackpointer and output signals
		full <= 0;
		empty <= 1;
		error <= 0;
		for(i = 0; i < N; i = i + 1)begin	// clear stack memory
			memm[i] <= 0;
		end
	end
	
	else if(full == 1 && push == 1)begin	// stack is  full but push operation continues
		error <= 1;									// and so signal error
	end
	
	else if(empty == 1 && pop  == 1)begin  // stack is  empty but pop operation continues
		error <= 1;									// so signal error
	end
	
	else if(push == 1 && pop  == 1)begin   // both push and pop operation happen at the same time
		error <= 1;								   // so signal error
	end
	
	else begin
		error <= 0;									// otherwise keep error low 
		
		if(push == 1)begin						// if push operation happens
			memm[sp] <= dio;						// write to stack and increment stack pointer 
			sp <= sp + 1;							// stack isnt empty anymore 
			empty <= 0;
			
			if(sp == N - 1)begin					// signal stack is full if stackpointer reaches above of N - 1
				full <= 1;
			end
			else begin
				full <= 0;
			end
			
		end
		if(pop == 1)begin							// if pop operation happens
			full <= 0;
			sp <= sp - 1;							// decrement stack pointer
			
			if(sp <= 0)begin						// if stackpointer was already zero, keep stackpointer at zero
				sp <= 0;								// signal error operation 
			end
			else begin
				data <= memm[sp - 1];			// read from stack memory and place it into data register
				memm[sp - 1] <= 0;				// clear memory for that location
				empty <= 0;			
				if(sp == 1)begin
					empty <= 1;						// signal empty if stackpointer is one
				end
			end
		end	
	end
	
end 
endmodule