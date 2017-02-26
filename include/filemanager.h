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
		const std::list<string> explode(const string &, const char &);
		std::string takeFirstWord(std::string &);
		std::list<std::string> getLines(const std::string &);
		std::map<std::string, cint::i8> getInstructions(const std::string &);					//Each file line is mapped in a matrix line
	};
}

#endif