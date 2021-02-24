#pragma once
#include "component_base_gpu.h"
class GpuDell :public GpuBase
{
public:
	~GpuDell();
	GpuDell(string name, string brand);
	virtual void DoGpuCalculate();
};
class GpuLenovo :public GpuBase
{
public:
	~GpuLenovo();
	GpuLenovo(string name, string brand);
	virtual void DoGpuCalculate();
};
class GpuAlienware:public GpuBase
{
public:
	~GpuAlienware();
	GpuAlienware(string name, string brand);
	virtual void DoGpuCalculate();
};