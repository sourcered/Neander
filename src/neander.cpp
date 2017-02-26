#include "../include/neander.h"

namespace neander
{
	void Neander::init(const std::string & filename, Memory & memory)
	{
		std::map<std::string, cint::ui8> program_instruction = filemanager->getInstructions(filename);
		mapInstructions(program_instruction, memory);		//Insert Program into memory
		cint::ui8 tmp;

		cint::ui8 PC = memory.registers.PC; 
		for (PC = 128; PC < 256;)
			executeInstruction(PC, memory);
		memory.registers.PC = PC;
	}
}