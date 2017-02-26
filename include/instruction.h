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
		bool isNegative(Memory &);
		bool isZero(Memory &);
	};

	class Instruction : public Jumper
	{
	public:
		void _nop(Memory &);
		void _sta(const cint::ui8, Memory &);
		void _lda(const cint::ui8, Memory &);
		void _add(const cint::ui8, Memory &);
		void _or(const cint::ui8, Memory &);
		void _and(const cint::ui8, Memory &);
		void _not(Memory &);
		void _jmp(const cint::ui8, Memory &);
		void _jn(const cint::ui8, Memory &);
		void _jz(const cint::ui8, Memory &);
		void _hlt(Memory &);
	};

}

#endif