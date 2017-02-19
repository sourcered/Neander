#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#ifndef INCLUDE_DATA_H
#define INCLUDE_DATA_H
#include "data.h"
#endif 

namespace neander
{
	class FileManager
	{
	public:
		std::map<std::string, cint::i8> getInstructions(const std::string &);					//Each file line is mapped in a matrix line
	};
}

#endif