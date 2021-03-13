#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#define PRINT_T(x,y) cout << (x) << (y) << endl
template <class T, class V>
class Student
{
private:
	T t;
	V v;
public:
	~Student();
	Student();
	Student(T t, V v);

	void ShowInfo();

};


template<class T,class V> 
Student<T, V>::Student() {}

template<class T,class V>
Student<T, V>::~Student() {}

template<class T,class V> 
Student<T, V> ::Student(T t,V v) 
{
	this->t = t;
	this->v = v;
}

template <class T,class V> 
void Student<T, V>::ShowInfo() 
{
	PRINT_T(this->t, this->v);
}
