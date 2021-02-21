#pragma once
#include <iostream>
#include "component_base_cpu.h"
class CpuDell :public CpuBase
{
public:
	~CpuDell();
	CpuDell(string name, string brand);
};
class CpuLenovo :public CpuBase 
{
	~CpuLenovo();
	CpuLenovo(string name, string brand);
};
class CpuAlienware :public CpuBase 
{
   ~CpuAlienware();
   CpuAlienware(string name, string brand);
};