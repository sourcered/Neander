#ifndef CORE_H
#define CORE_H

#include "filemanager.h"
#include "instruction.h"

namespace neander
{
	class Core
	{
	protected:
		FileManager * filemanager;
		Instruction * instruction;
	public:
		friend class FileManager;
		Core() : filemanager(new FileManager()), 
						  instruction(new Instruction()) {} 
		cint::i8 getDecimalInstruction(const std::string &);				//Get a std::string and convert to a integer
		void mapInstructions(const std::map<std::string, cint::i8> &);		//Pass std::map to a matrix decimal (memory)
	};

}

#endif