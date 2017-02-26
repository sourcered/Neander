#include "../include/instruction.h"

namespace neander
{
	bool Jumper::isNegative()
	{
		return (memory.registers.AC < 0);
	}

	bool Jumper::isZero()
	{
		return (memory.registers.AC == 0);
	}


	void Instruction::_nop()
	{
	}

	void Instruction::_sta(const cint::ui8 address)
	{
		memory.Imemory[address][0] = memory.registers.AC;
	}

	void Instruction::_lda(const cint::ui8 address)
	{
		memory.registers.AC = memory.Imemory[address][0];
	}

	void Instruction::_add(const cint::ui8 address)
	{
		memory.registers.AC += memory.Imemory[address][0];
	}

	void Instruction::_or(const cint::ui8 address)
	{
		memory.registers.AC |= memory.Imemory[address][0];	  	
	}

	void Instruction::_and(const cint::ui8 address)
	{
		memory.registers.AC &= memory.Imemory[address][0];
	}

	void Instruction::_not()
	{
		memory.registers.AC = ~memory.registers.AC; 	//Complement 1
	}

	void Instruction::_jmp(const cint::ui8 address)
	{
		memory.registers.PC = address;
	}

	void Instruction::_jn(const cint::ui8 address)
	{
		memory.registers.PC = address;
	}

	void Instruction::_jz(const cint::ui8 address)
	{
		memory.registers.PC = address;
	}

	void Instruction::_hlt()
	{
		//Stop program and show Log
	}

}