#pragma once
#include <iostream>
using namespace std;
#define PRINT_T(T) cout << T << endl
class PlayerBase
{
private:
	string m_name;
	short m_age;
	char m_gender;
	
public:
	~PlayerBase();
	PlayerBase();
	PlayerBase(string name, short age, char gender);

	void set_m_name(string name);
	void set_m_age(short age);
	void set_m_gender(char gender);

	string get_m_name();
	short get_m_age();
	char get_m_gender();
	virtual void ShowSlogan();
};