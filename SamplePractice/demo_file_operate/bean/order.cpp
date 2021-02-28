#define _CRT_SECURE_NO_WARNINGS 1
#include "order.h"
Order::~Order() {}
Order::Order() {}
Order::Order(string name, string date, float price) 
{
	this->m_name = name;
	this->m_date = date;
	this->m_price = price;
}

void Order::set_m_id(int id) 
{
	this->m_id = id;
}
void Order::set_m_name(string name) 
{
	this->m_name = name;
}
void Order::set_m_date(string date) 
{
	this->m_date = date;
}
void Order::set_m_price(float price) 
{
	this->m_price = price;
}

int Order::get_m_id() { return this->m_id; }
string Order::get_m_name() { return this->m_name; }
string Order::get_m_date() { return this->m_date; }
float Order::get_m_price() { return this->m_price; }