#ifndef CORE_H
#define CORE_H

#include "filemanager.h"

namespace neander
{
	class Core
	{
	public:
		cint::si getDecimalInstruction(std::string);						//Get a std::string and convert to a integer
		std::map<std::string, cint::si> getInstructions(std::string);	//Each file line is mapped in a matrix line
		void mapInstructions(const std::map<std::string, cint::si> &, cint::si[][2]);	//Pass std::map to a matrix decimal (memory)
	};

}

#endif