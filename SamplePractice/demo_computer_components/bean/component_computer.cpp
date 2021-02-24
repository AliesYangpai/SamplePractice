#define _CRT_SECURE_NO_WARNINGS 1
#include "component_computer.h"
ComputerDell::~ComputerDell() {}
ComputerDell::ComputerDell(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) :ComputerBase(name,brand,cpu,gpu, memory_bank){}


ComputerLenovo::~ComputerLenovo() {}
ComputerLenovo::ComputerLenovo(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) : ComputerBase(name, brand, cpu, gpu, memory_bank) {}

ComputerAlienware::~ComputerAlienware() {}
ComputerAlienware::ComputerAlienware(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) : ComputerBase(name, brand, cpu, gpu, memory_bank) {}