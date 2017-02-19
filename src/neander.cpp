#include "../include/neander.h"

namespace neander
{
	void Neander::init(const std::string & filename)
	{
		std::map<std::string, cint::i8> program_instruction = filemanager->getInstructions(filename);
		mapInstructions(program_instruction);
		
		for (cint::i8 i = 0; i < 128; i++)
		{
		}
	}
}