#define _CRT_SECURE_NO_WARNINGS 1
#include "base_player.h"
BasePlayer::~BasePlayer() {}
BasePlayer::BasePlayer()
{
	PRINT_T("===BasePlayer()");
}
BasePlayer::BasePlayer(int id, short age, char gender)
{
	PRINT_T("===BasePlayer(id,age,gender)");

	this->m_id = id;
	this->m_age = age;
	this->m_gender = gender;
}

void BasePlayer::set_m_id(int id)
{
	m_id = id;
}
void BasePlayer::set_m_age(short age)
{
	m_age = age;
}
void BasePlayer::set_m_gender(char gender)
{
	m_gender = gender;
}

int BasePlayer::get_m_id()
{
	return this->m_id;
}
short BasePlayer::get_m_age()
{
	return  this->m_age;
}
char BasePlayer::get_m_gender()
{
	return this->m_gender;
}
void BasePlayer::ShowSlogan()
{
	PRINT_T("I AM PLYER");
}