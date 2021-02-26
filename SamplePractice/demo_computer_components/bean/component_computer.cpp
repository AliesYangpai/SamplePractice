#define _CRT_SECURE_NO_WARNINGS 1
#include "component_computer.h"
ComputerDell::~ComputerDell() 
{
	PRINT_T("===~ComputerDell");
}
ComputerDell::ComputerDell(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) :ComputerBase(name,brand,cpu,gpu, memory_bank){}


ComputerLenovo::~ComputerLenovo()
{
	PRINT_T("===~ComputerLenovo");
}
ComputerLenovo::ComputerLenovo(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) : ComputerBase(name, brand, cpu, gpu, memory_bank) {}

ComputerAlienware::~ComputerAlienware() 
{
	PRINT_T("===~ComputerAlienware");
}
ComputerAlienware::ComputerAlienware(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank) : ComputerBase(name, brand, cpu, gpu, memory_bank) {}

ComputerDiy::~ComputerDiy() 
{
	PRINT_T("===~ComputerDiy");
}
ComputerDiy::ComputerDiy(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank):ComputerBase(name,brand,cpu,gpu,memory_bank) {}