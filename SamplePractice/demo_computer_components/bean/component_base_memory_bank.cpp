#define _CRT_SECURE_NO_WARNINGS 1
#include "component_base_memory_bank.h"
MemoryBankBase::~MemoryBankBase() {}
MemoryBankBase::MemoryBankBase() {}
MemoryBankBase::MemoryBankBase(string name,string brand) 
{
	this->m_name = name;
	this->m_brand = brand;
}

void MemoryBankBase::set_m_id(int id)
{
	this->m_id = id;
}
void MemoryBankBase::set_m_name(string name)
{
	this->m_name = name;
}
void MemoryBankBase::set_m_brand(string brand)
{
	this->m_brand = brand;
}

int MemoryBankBase::get_m_id()
{
	return this->m_id;
}
string MemoryBankBase::get_m_name()
{
	return this->m_name;
}
string MemoryBankBase::get_m_brand()
{
	return this->m_brand;
}