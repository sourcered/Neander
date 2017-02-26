#ifndef LOG_H
#define LOG_H

#ifndef INCLUDE_PREPROCESSOR_H
#define INCLUDE_PREPROCESSOR_H
#include "preprocessor.h"
#endif

namespace neander
{
	class Log_
	{
	public:
		static void printMap(const std::map<std::string, cint::ui8> &);
		static void printStatus();
	};
}

#endif