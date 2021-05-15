#pragma once
#include <iostream>
#include <string>
#define PRINT_T(T) cout << (T) << endl
using namespace std;

template <class T1,class T2>
class WrapToy {
private:
	T1 mT1;
	T2 mT2;
public:
	~WrapToy();
	WrapToy();
	WrapToy(T1 t1, T2 t2);
	
	void set_mT1(T1 t1);
	void set_mT2(T2 t2);
	T1 get_m_T1();
	T2 get_m_T2();

	void ShowCommonInfo();

};

template<class T1,class T2>
WrapToy<T1, T2>::~WrapToy() 
{
	PRINT_T("~WrapToy()");
}
template<class T1, class T2>
WrapToy<T1, T2>::WrapToy() 
{}
template<class T1, class T2>
WrapToy<T1, T2>::WrapToy(T1 t1, T2 t2) 
{
	this->mT1 = t1;
	this->mT2 = t2;
}

template<class T1, class T2>
void WrapToy<T1, T2>::set_mT1(T1 t1)
{
	this->mT1 = t1;
}
	
template<class T1,class T2>
void WrapToy<T1, T2>::set_mT2(T2 t2) 
{
	this->mT2 = t2;
}

template<class T1, class T2>
T1 WrapToy<T1,T2>::get_m_T1()
{
	return this->mT1;
}

template<class T1, class T2>
T2 WrapToy<T1, T2>::get_m_T2() 
{
	return this->mT2;
}

template<class T1, class T2>
void WrapToy<T1, T2> ::ShowCommonInfo()
{
	PRINT_T(this->mT1);
	PRINT_T(this->mT2);
}