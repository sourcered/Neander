#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#ifndef INCLUDE_DATA_H
#define INCLUDE_DATA_H
#include "data.h"
#endif

namespace neander
{
	// extern Memory memory;
	class Jumper
	{
	public:
		bool isNegative();
		bool isZero();
	};

	class Instruction : public Jumper
	{
	public:
		void _nop();
		void _sta(const cint::ui8);
		void _lda(const cint::ui8);
		void _add(const cint::ui8);
		void _or(const cint::ui8);
		void _and(const cint::ui8);
		void _not();
		void _jmp(const cint::ui8);
		void _jn(const cint::ui8);
		void _jz(const cint::ui8);
		void _hlt();
	};

}

#endif