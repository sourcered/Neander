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
	extern const cint::i8 maxBIT;
	extern const cint::i8 sizeMemory;
	#endif

	enum class Log : cint::i8
	{
		PARAMETER_ERROR,
		TOO_MUCH_PARAMETER_ERROR,
		MISSING_PARAMETER_ERROR,
		SINTAX_ERROR,
		SUCESS
	};

	enum class Instructions : cint::i8
	{
		NOP,
		NOT,
		ADD,
		AND,
		OR,	
		STA,
		LDA,
		JM, 
		JN, 
		JZ, 
		HLT 
	};

	struct ProgramData
	{
		std::map<std::string, std::string> programData;	//Instruction Address
	};

	struct Registers
	{
		cint::i8 PC;
		cint::i8 AC;						//Acumulator
	};

	struct Memory
	{
		Registers registers;
		cint::i8 Imemory[256][2];			//Instructions, eddress || Value
		cint::i8 Full_Memory[256];
	};

	struct AStack
	{
		cint::i8 instructionPosition;
		Instructions instructions;
		cint::i8 paramenter;
	};

	struct Stack
	{
		cint::i8 PC;						//Current position
		std::vector<AStack> stack;			//Stack of instructions to do
	};

	extern Memory memory;
}

#endif