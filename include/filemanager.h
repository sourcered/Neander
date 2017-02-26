#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#ifndef INCLUDE_DATA_H
#define INCLUDE_DATA_H
#include "data.h"
#endif 

#ifndef LOG_INCLUDE
#define LOG_INCLUDE
#include "log.h"
#endif 

namespace neander
{

	class FileManager
	{
	public:
		const std::list<std::string> explode(const std::string &, const char &);
		std::string * takeWords(std::string &);
		std::list<std::string> getLines(const std::string &);
		std::map<std::string, cint::ui8> getInstructions(const std::string &);					//Each file line is mapped in a matrix line
	};
}

#endif