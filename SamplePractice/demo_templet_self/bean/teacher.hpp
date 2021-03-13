#pragma once
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
	string m_name;
	short m_age;
public:
	~Teacher();
	Teacher();
	Teacher(string name, short age);
	void ShowInfo();
	template<class T, class V>
	void ShowToPlay(T t, V v);
};

Teacher::~Teacher() {};
Teacher::Teacher() {};
Teacher::Teacher(string name, short age) 
{
	this->m_name = name;
	this->m_age = age;
}
void Teacher::ShowInfo()
{
	cout << this->m_name << this->m_age << endl;
}

template <class T,class V >
void Teacher::ShowToPlay(T t,V v)
{
	cout << t << v << endl;
}