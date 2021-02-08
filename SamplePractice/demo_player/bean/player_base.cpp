#define _CRT_SECURE_NO_WARNINGS 1
#include "player_base.h"
PlayerBase::~PlayerBase() {}
PlayerBase::PlayerBase()
{
	PRINT_T("===PlayerBase()");
}
PlayerBase::PlayerBase(int id, short age, char gender)
{
	PRINT_T("===PlayerBase(id,age,gender)");

	this->m_id = id;
	this->m_age = age;
	this->m_gender = gender;
}

void PlayerBase::set_m_id(int id)
{
	m_id = id;
}
void PlayerBase::set_m_age(short age)
{
	m_age = age;
}
void PlayerBase::set_m_gender(char gender)
{
	m_gender = gender;
}

int PlayerBase::get_m_id()
{
	return this->m_id;
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