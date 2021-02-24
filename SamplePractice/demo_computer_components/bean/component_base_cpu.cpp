#define _CRT_SECURE_NO_WARNINGS 1
#include "component_base_cpu.h"
CpuBase::~CpuBase() {}
CpuBase::CpuBase() {}
CpuBase::CpuBase(string name, string brand) 
{
	this->m_name = name;
	this->m_brand = brand;
}
void CpuBase::set_m_id(int id) 
{
	this->m_id = id;
}
void CpuBase::set_m_name(string name) 
{
	this->m_name = name;
}
void CpuBase::set_m_brand(string brand) 
{
	this->m_brand = brand;
}
int CpuBase::get_m_id() 
{
	return this->m_id;
}
string CpuBase::get_m_name() 
{
	return this->m_name;
}
string CpuBase::get_m_brand() 
{
	return this->m_brand;
}
