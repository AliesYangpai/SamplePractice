#pragma once
#include "component_base_memory_bank.h"
class MemoryBankDell :public MemoryBankBase
{
public:
	~MemoryBankDell();
	MemoryBankDell(string name, string brand);
	virtual void DoMemoryBankCalculate();
};

class MemoryBankLenovo :public MemoryBankBase
{
public:
	~MemoryBankLenovo();
	MemoryBankLenovo(string name, string brand);
	virtual void DoMemoryBankCalculate();
};

class MemoryBankAlienware :public MemoryBankBase
{
public:
	~MemoryBankAlienware();
	MemoryBankAlienware(string name, string brand);
   virtual void DoMemoryBankCalculate();
};