#define _CRT_SECURE_NO_WARNINGS 1
#include "menu.h"
Menu::~Menu() {}
Menu::Menu() {}
Menu::Menu(string name, string content, float price)
{
	this->m_name = name;
	this->m_content = content;
	this->m_price = price;
}

void Menu::set_m_name(string name)
{
	this->m_name = name;
}
void Menu::set_m_content(string content)
{
	this->m_content = content;
}
void Menu::set_m_price(float price)
{
	this->m_price = price;
}

string Menu::get_m_name()
{
	return this->m_name;
}
string Menu::get_m_content()
{
	return this->m_content;
}
float Menu::get_m_price()
{
	return this->m_price;
}
void Menu::ShowInfo()
{
	cout << this->m_name << this->m_content   << this->m_price << endl;
}


bool Menu::operator==(string p_param) 
{
	return this->m_name == p_param; // 这里不能使用compare要使用“==”判断
}