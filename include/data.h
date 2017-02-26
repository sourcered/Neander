#ifndef DATA_H
#define DATA_H

#ifndef INCLUDE_PREPROCESSOR_H
#define INCLUDE_PREPROCESSOR_H
#include "preprocessor.h"
#endif

namespace neander
{
	#ifndef MEMORY_CONSTANS
	#define MEMORY_CONSTANS
	extern const cint::ui8 maxBIT;
	extern const cint::ui8 sizeMemory;
	#endif

	enum class Log : cint::ui8
	{
		PARAMETER_ERROR,
		TOO_MUCH_PARAMETER_ERROR,
		MISSING_PARAMETER_ERROR,
		SINTAX_ERROR,
		SUCESS
	};

	enum class Instructions : cint::ui8
	{
		NOP =   0,
		NOT =  96,
		ADD =  48,
		AND =  80,
		OR 	=  64,	
		STA =  16,
		LDA =  32,
		JM 	= 128, 
		JN 	= 144, 
		JZ 	= 160, 
		HLT = 240
	};

	struct ProgramData
	{
		std::map<std::string, std::string> programData;	//Instruction Address
	};

	struct Registers
	{
		cint::ui8 PC;
		cint::ui8 AC;						//Acumulator
	};

	struct Memory
	{
		Registers registers;
		cint::ui8 Imemory[256][2];			//Instructions, eddress || Value
		cint::ui8 Full_Memory[256];
	};

	struct AStack
	{
		cint::ui8 instructionPosition;
		Instructions instructions;
		cint::ui8 paramenter;
	};

	struct Stack
	{
		cint::ui8 PC;						//Current position
		std::vector<AStack> stack;			//Stack of instructions to do
	};

	// extern Memory memory;
}

#endif