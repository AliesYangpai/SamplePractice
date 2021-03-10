#define _CRT_SECURE_NO_WARNINGS 1
#include "player_base.h"
PlayerBase::~PlayerBase() {}
PlayerBase::PlayerBase()
{
	PRINT_T("===PlayerBase()");
}
PlayerBase::PlayerBase(string name, short age, char gender)
{
	PRINT_T("===PlayerBase(name,age,gender)");

	this->m_name = name;
	this->m_age = age;
	this->m_gender = gender;
}

void PlayerBase::set_m_name(string name)
{
	m_name = name;
}
void PlayerBase::set_m_age(short age)
{
	m_age = age;
}
void PlayerBase::set_m_gender(char gender)
{
	m_gender = gender;
}

string PlayerBase::get_m_name()
{
	return this->m_name;
}
short PlayerBase::get_m_age()
{
	return  this->m_age;
}
char PlayerBase::get_m_gender()
{
	return this->m_gender;
}
void PlayerBase::ShowSlogan()
{
	PRINT_T("I AM PLYER");
}