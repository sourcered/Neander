#include "../include/core.h"

namespace neander
{
	cint::i8 Core::getDecimalInstruction(const std::string & instruction_)
	{
		cint::i8 value = 0;
		return value;
	}

	void Core::mapInstructions(const std::map<std::string, cint::i8> & program_Instructions)
	{

	}

	Instructions Core::getKeyword(cint::i8 & PC)
	{
		Instructions instructions = Instructions::NOP;
		return instructions;
	}

	cint::i8 Core::get_number_Parameters(Instructions instructions)
	{
		cint::i8 tmp = 0;
		return tmp;
	}


	void Core::executeInstruction(cint::i8 & PC)
	{	
		Instructions keyword = getKeyword(PC);

		if(get_number_Parameters(keyword) == 1)
		{
			if(keyword == Instructions::JM)
			{
			}
			else if(keyword == Instructions::JN || keyword == Instructions::JZ)
			{
				PC = memory.Full_Memory[PC+1];
			}
			else 
			{

				PC += 2;
			}
		}

		if(get_number_Parameters(keyword) == 0)
		{

			PC++;
		}
	}

}