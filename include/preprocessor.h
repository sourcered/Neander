#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <iostream>
#include <map>
#include <vector>
#include <list>
#include "math.h"
#include <string>
#include <cstdint>
#include <fstream>

#define for_(i, count) for(size_t i = 0; i < count; i++)
#define while_d(i) while(i--)
#define for_it(x,y) for(auto x = y.begin(); x != y.end(); x++)

namespace cint
{
	typedef unsigned short int usi;
	typedef unsigned int ui;
	typedef short int si;
	typedef std::uint8_t ui8;		//Max 256
	typedef std::int8_t i8;			//Max -128 / 127
	typedef std::int16_t i16;
	typedef std::int32_t i32;
}

#endif 