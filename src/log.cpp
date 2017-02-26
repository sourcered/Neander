#include "../include/log.h"

namespace neander 
{
	void Log_::printMap(const std::map<std::string, cint::ui8> & map)
	{
		std::string tmp;
		for (auto it = map.begin(); it != map.end(); it++)
		{
			tmp = std::to_string(it->second);
			std::cout << "[" << it->first << "]: " << tmp << std::endl;
		}
	}
}