#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <iostream>
#include <map>
#include <vector>
#include "math.h"
#include <string>
#include <cstdint>

#define for_(i, count) for(size_t i = 0; i < count; i++)
#define while_d(i) while(i--)

namespace cint
{
	typedef unsigned short int usi;
	typedef unsigned int ui;
	typedef short int si;
	typedef std::int8_t i8;
	typedef std::int16_t i16;
	typedef std::int32_t i32;
}

#endif 