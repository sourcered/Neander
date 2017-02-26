#ifndef NEANDER_H
#define NEANDER_H

#include "core.h"

namespace neander
{
	class Neander : public Core
	{
	public:
		void init(const std::string &, Memory & memory); 					//File name
	};
}

#endif