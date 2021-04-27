#define _CRT_SECURE_NO_WARNINGS 1
#include "apple.h"
Apple::Apple(){}
Apple::~Apple() {}
Apple::Apple(int id, string name, float price) 
{
	this->m_id = id;
	this->m_name = name;
	this->m_price = price;
}

void Apple::set_m_id(int id) 
{
	this->m_id = id;
}

void Apple::set_m_name(string name) 
{
	this->m_name = name;
}

void Apple::set_m_price(float price) 
{
	this->m_price = price;
}

int Apple::get_m_id() 
{
	return m_id;
}

string Apple::get_m_name() 
{
	return m_name;
}

float Apple::get_m_price() 
{
	return m_price;
}