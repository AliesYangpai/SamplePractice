#define _CRT_SECURE_NO_WARNINGS 1
#include "friut.h"
Fruit::~Fruit() 
{
	cout << "~Fruit()" << endl;
}
Fruit::Fruit() {}
Fruit::Fruit(string name, string type) 
{
	this->mName = name;
	this->mType = type;
}
void Fruit::set_name(string name) 
{
	this->mName = name;
}
void Fruit::set_type(string type) 
{
	this->mType = type;
}
string Fruit::get_name() { return this->mName; }
string Fruit::get_type() { return this->mType; }