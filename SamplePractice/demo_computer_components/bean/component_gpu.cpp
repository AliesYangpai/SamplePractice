#define _CRT_SECURE_NO_WARNINGS 1
#include "component_gpu.h"
GpuDell::~GpuDell() {}
GpuDell::GpuDell(string name, string brand) :GpuBase(name, brand) {}
void GpuDell::DoGpuCalculate()
{
	PRINT_T("===GpuDell DoGpuCalculate");
}

GpuLenovo::~GpuLenovo() {}
GpuLenovo::GpuLenovo(string name, string brand) :GpuBase(name, brand) {}
void GpuLenovo::DoGpuCalculate() 
{
	PRINT_T("===GpuLenovo DoGpuCalculate");
}

GpuAlienware::~GpuAlienware() {}
GpuAlienware::GpuAlienware(string name, string brand) :GpuBase(name, brand) {}
void GpuAlienware::DoGpuCalculate() 
{
	PRINT_T("===GpuAlienware DoGpuCalculate");
}
