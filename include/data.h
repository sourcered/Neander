#ifndef DATA_H
#define DATA_H

#include "preprocessor.h"

namespace neander
{
	#ifndef MEMORY_CONSTANS
	#define MEMORY_CONSTANS
	// const cint::si maxBIT = 8;
	// const cint::si sizeMemory = maxBIT * maxBIT;
	#endif

	enum class Log
	{
		PARAMETER_ERROR,
		TOO_MUCH_PARAMETER_ERROR,
		MISSING_PARAMETER_ERROR,
		SINTAX_ERROR,
		SUCESS
	};

	enum class Instruction
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

	struct Memory
	{
		cint::si AC;						//Acumulator
		cint::si Imemory[256][2];			//Instructions, eddress || Value
	};

	struct AStack
	{
		cint::si instructionPosition;		
		Instruction instruction;
		cint::si paramenter;
	};

	struct Stack
	{
		cint::si PC;						//Current position
		std::vector<AStack> stack;			//Stack of instructions to do
	};
}

#endif