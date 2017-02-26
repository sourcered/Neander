#include "../include/instruction.h"

namespace neander
{
	bool Jumper::isNegative(Memory & memory)
	{
		return (memory.registers.AC < 0);
	}

	bool Jumper::isZero(Memory & memory)
	{
		return (memory.registers.AC == 0);
	}


	void Instruction::_nop(Memory & memory)
	{
	}

	void Instruction::_sta(const cint::ui8 address, Memory & memory)
	{
		memory.Imemory[address][0] = memory.registers.AC;
	}

	void Instruction::_lda(const cint::ui8 address, Memory & memory)
	{
		memory.registers.AC = memory.Imemory[address][0];
	}

	void Instruction::_add(const cint::ui8 address, Memory & memory)
	{
		memory.registers.AC += memory.Imemory[address][0];
	}

	void Instruction::_or(const cint::ui8 address, Memory & memory)
	{
		memory.registers.AC |= memory.Imemory[address][0];	  	
	}

	void Instruction::_and(const cint::ui8 address, Memory & memory)
	{
		memory.registers.AC &= memory.Imemory[address][0];
	}

	void Instruction::_not(Memory & memory)
	{
		memory.registers.AC = ~memory.registers.AC; 	//Complement 1
	}

	void Instruction::_jmp(const cint::ui8 address, Memory & memory)
	{
		memory.registers.PC = address;
	}

	void Instruction::_jn(const cint::ui8 address, Memory & memory)
	{
		memory.registers.PC = address;
	}

	void Instruction::_jz(const cint::ui8 address, Memory & memory)
	{
		memory.registers.PC = address;
	}

	void Instruction::_hlt(Memory & memory)
	{
		//Stop program and show Log
	}

}