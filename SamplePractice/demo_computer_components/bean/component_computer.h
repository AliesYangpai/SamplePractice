#pragma once
#include "component_base_computer.h"
class ComputerDell :public ComputerBase
{
public:
	~ComputerDell();
	ComputerDell(string name, string brand,CpuBase* cpu,GpuBase* gpu,MemoryBankBase* memory_bank);
};
class ComputerLenovo :public ComputerBase
{
public:
	~ComputerLenovo();
	ComputerLenovo(string name, string brand, CpuBase* cpu, GpuBase* gpu, MemoryBankBase* memory_bank);
};
class ComputerAlienware :public ComputerBase
{
public:
	~ComputerAlienware();
	ComputerAlienware(string name, string brand, CpuBase* cpu, GpuBase* gpu, MemoryBankBase* memory_bank);
};
class ComputerDiy :public ComputerBase
{
public:
	~ComputerDiy();
	ComputerDiy(string name, string brand, CpuBase* cpu, GpuBase* gpu, MemoryBankBase* memory_bank);
};