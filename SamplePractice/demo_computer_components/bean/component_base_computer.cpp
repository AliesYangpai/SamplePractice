#define _CRT_SECURE_NO_WARNINGS 1
#include "component_base_computer.h"
ComputerBase::~ComputerBase() 
{
	PRINT_T("===~ComputerBase");
	if (m_cpu !=NULL)
	{
		delete m_cpu;
		m_cpu = NULL;
	}
	if (m_gpu != NULL)
	{
		delete m_gpu;
		m_gpu = NULL;
	}
	if (m_memory_bank !=NULL)
	{
		delete m_memory_bank;
		m_memory_bank = NULL;
	}
}
ComputerBase::ComputerBase() {}
ComputerBase::ComputerBase(string name, string brand)
{
	this->m_name = name;
	this->m_brand = brand;
}
ComputerBase::ComputerBase(
	string name,
	string brand,
	CpuBase* cpu,
	GpuBase* gpu,
	MemoryBankBase* memory_bank)
{
	this->m_name = name;
	this->m_brand = brand;
	this->m_cpu = cpu;
	this->m_gpu = gpu;
	this->m_memory_bank = memory_bank;
}

void ComputerBase::set_m_id(int id)
{
	this->m_id = id;
}
void ComputerBase::set_m_name(string name)
{
	this->m_name = name;
}
void ComputerBase::set_m_brand(string brand)
{
	this->m_brand = brand;
}
void ComputerBase::set_m_cpu(CpuBase* cpu) 
{
	this->m_cpu = cpu;
}
void ComputerBase::set_m_gpu(GpuBase* gpu) 
{
	this->m_gpu = gpu;
}
void ComputerBase::set_m_memory_bank(MemoryBankBase* memory_bank) 
{
	this->m_memory_bank = memory_bank;
}

int ComputerBase::get_m_id()
{
	return this->m_id;
}
string ComputerBase::get_m_name()
{
	return this->m_name;
}
string ComputerBase::get_m_brand()
{
	return this->m_brand;
}
CpuBase* ComputerBase::get_m_cpu()
{
	return m_cpu;
}
GpuBase* ComputerBase::get_m_gpu() 
{
	return m_gpu;
}
MemoryBankBase* ComputerBase::get_m_memory_bank()
{
	return m_memory_bank;
}