#include "../include/core.h"

namespace neander
{
	cint::ui8 Core::getDecimalInstruction(const std::string & instruction_)
	{
		cint::ui8 value = -1;
		if(instruction_ == "nop")		value = 0;
		else if(instruction_ == "not")	value = 1;
		else if(instruction_ == "add")	value = 2;
		else if(instruction_ == "and")	value = 3;
		else if(instruction_ == "or")	value = 4;
		else if(instruction_ == "sta")	value = 5;
		else if(instruction_ == "lda")	value = 6;
		else if(instruction_ == "jm")	value = 7;
		else if(instruction_ == "jn")	value = 8;
		else if(instruction_ == "jz")	value = 9;
		else if(instruction_ == "hlt")	value = 10;
		return value;
	}

	void Core::mapInstructions(const std::map<std::string, cint::ui8> & program_Instructions, const Memory & memory)
	{
		size_t i = 0;
		for(auto it = program_Instructions.begin(); it != program_Instructions.end(); it++, i++)
		{
			// memory.Full_Memory[i] = 0;
		}
	}

	Instructions Core::getKeyword(cint::ui8 & PC)
	{
		Instructions instructions = Instructions::NOP;

		return instructions;
	}

	cint::ui8 Core::get_number_Parameters(Instructions instructions)
	{
		cint::ui8 nparamenter;
		if(	instructions == Instructions::ADD ||
			instructions == Instructions::AND ||
			instructions == Instructions::OR  ||
			instructions == Instructions::LDA ||
			instructions == Instructions::STA ||
			instructions == Instructions::JM  ||
			instructions == Instructions::JN  || 
			instructions == Instructions::JZ) nparamenter = 1;
		else nparamenter = 0;
		return nparamenter;
	}


	void Core::executeInstruction(cint::ui8 & PC, const Memory & memory)
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