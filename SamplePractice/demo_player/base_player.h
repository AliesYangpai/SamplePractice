#pragma once
#include <iostream>
using namespace std;
#define PRINT_T(T) cout << T << endl
class BasePlayer
{
private:
	int m_id;
	short m_age;
	char m_gender;
	
public:
	~BasePlayer();
	BasePlayer();
	BasePlayer(int id, short age, char gender);

	void set_m_id(int id);
	void set_m_age(short age);
	void set_m_gender(char gender);

	int get_m_id();
	short get_m_age();
	char get_m_gender();
	virtual void ShowSlogan();
};