#pragma once
#include <iostream>
#include "component_base_cpu.h"
class CpuDell :public CpuBase
{
public:
	~CpuDell();
	CpuDell(string name, string brand);
	virtual void DoCpuCalculate();
};
class CpuLenovo :public CpuBase 
{
public:
	~CpuLenovo();
	CpuLenovo(string name, string brand);
	virtual void DoCpuCalculate();
};
class CpuAlienware :public CpuBase 
{
public:
   ~CpuAlienware();
   CpuAlienware(string name, string brand);
   virtual void DoCpuCalculate();
};