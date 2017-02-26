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

		Core() : filemanager(new FileManager()), instruction(new Instruction()) {} 

		cint::ui8 getDecimalInstruction(const std::string &);							//Get a std::string and convert to a integer
		void mapInstructions(const std::map<std::string, cint::ui8> &, const Memory &);	//Pass std::map to a matrix decimal (memory)
		Instructions getKeyword(cint::ui8 &);
		cint::ui8 get_number_Parameters(Instructions);
		void executeInstruction(cint::ui8 &, const Memory &);
	};
}

#endif