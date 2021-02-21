#define _CRT_SECURE_NO_WARNINGS 1
#include "component_base_gpu.h"
GpuBase::~GpuBase() {}
GpuBase::GpuBase() {}
GpuBase::GpuBase(string name, string brand)
{
	this->m_name = name;
	this->m_brand = brand;
}

void GpuBase::set_m_id(int id)
{
	this->m_id = id;
}
void GpuBase::set_m_name(string name)
{
	this->m_name = name;
}
void GpuBase::set_m_brand(string brand)
{
	this->m_brand = brand;
}

int GpuBase::get_m_id() 
{
	return this->m_id;
}
string GpuBase::get_m_name() 
{
	return this->m_name;
}
string GpuBase::get_m_brand()
{
	return this->m_brand;
}