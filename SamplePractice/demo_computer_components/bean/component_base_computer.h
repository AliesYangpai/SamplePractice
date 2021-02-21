#pragma once
#include <iostream>
#include "component_base_cpu.h"
#include "component_base_gpu.h"
#include "component_base_memory_bank.h"
using namespace std;
class ComputerBase 
{
private:
	int m_id;
	string m_name;
	string m_brand;
	CpuBase& m_cpu;
	GpuBase& m_gpu;
	MemoryBankBase& m_memory_bank;

public:
	~ComputerBase();
	ComputerBase();
	ComputerBase(string name,string brand);
	ComputerBase(string name, string brand, CpuBase& cpu, GpuBase& gpu, MemoryBankBase& memory_bank);

	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_brand(string brand);
	void set_m_cpu(CpuBase& cpu);
	void set_m_gpu(GpuBase& gpu);
	void set_m_memory_bank(MemoryBankBase& memory_bank);

	int get_m_id();
	string get_m_name();
	string get_m_brand();
	CpuBase& get_m_cpu();
	GpuBase& get_m_gpu();
	MemoryBankBase& get_m_memory_bank();

};