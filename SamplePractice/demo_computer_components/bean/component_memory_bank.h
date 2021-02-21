#pragma once
#include "component_base_memory_bank.h"
class MemoryBankDell :public MemoryBankBase
{
	~MemoryBankDell();
	MemoryBankDell(string name, string brand);
};

class MemoryBankLenovo :public MemoryBankBase
{
	~MemoryBankLenovo();
	MemoryBankLenovo(string name, string brand);
};

class MemoryBankAlienware :public MemoryBankBase
{
	~MemoryBankAlienware();
	MemoryBankAlienware(string name, string brand);
};