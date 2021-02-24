#define _CRT_SECURE_NO_WARNINGS 1
#include "component_cpu.h"
CpuDell::~CpuDell() {};
CpuDell::CpuDell(string name, string brand) :CpuBase(name, brand) {}
void CpuDell::DoCpuCalculate()
{
	PRINT_T("===CpuDell DoCpuCalculate");
}

CpuLenovo::~CpuLenovo() {};
CpuLenovo::CpuLenovo(string name, string brand) :CpuBase(name, brand) {}
void CpuLenovo::DoCpuCalculate()
{
	PRINT_T("===CpuLenovo DoCpuCalculate");
}

CpuAlienware::~CpuAlienware() {}
CpuAlienware::CpuAlienware(string name, string brand) :CpuBase(name, brand) {};
void CpuAlienware::DoCpuCalculate()
{
	PRINT_T("===CpuAlienware DoCpuCalculate");
}