#define _CRT_SECURE_NO_WARNINGS 1
#include "component_memory_bank.h"
MemoryBankDell::~MemoryBankDell() {}
MemoryBankDell::MemoryBankDell(string name, string brand) :MemoryBankBase(name, brand) {}
void MemoryBankDell::DoMemoryBankCalculate() 
{
	PRINT_T("===MemoryBankDell DoMemoryBankCalculate");
}

MemoryBankLenovo::~MemoryBankLenovo() {}
MemoryBankLenovo::MemoryBankLenovo(string name, string brand) :MemoryBankBase(name, brand) {}
void MemoryBankLenovo::DoMemoryBankCalculate() 
{
	PRINT_T("===MemoryBankLenovo DoMemoryBankCalculate");
}

MemoryBankAlienware::~MemoryBankAlienware() {}
MemoryBankAlienware::MemoryBankAlienware(string name, string brand) :MemoryBankBase(name, brand) {}
void MemoryBankAlienware::DoMemoryBankCalculate() 
{
	PRINT_T("===MemoryBankAlienware DoMemoryBankCalculate");
}