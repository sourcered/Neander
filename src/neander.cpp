#include "../include/neander.h"

namespace neander
{
	void Neander::init(const std::string & filename)
	{
		std::map<std::string, cint::i8> program_instruction = filemanager->getInstructions(filename);
		mapInstructions(program_instruction);		//Insert Program into memory
		cint::i8 tmp;

		cint::i8 PC = memory.registers.PC; 
		for (PC = 0; PC < 127;)
			executeInstruction(PC);
		memory.registers.PC = PC;
	}
}