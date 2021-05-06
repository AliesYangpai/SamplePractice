#define _CRT_SECURE_NO_WARNINGS 1
#include "banana.h"
Banana::~Banana() 
{
	PRINT_T("~Banana()");
}
Banana::Banana(string name, string type) :Fruit(name,type) {}
Banana::Banana(string name, string type, string supplier) : Fruit(name, type) 
{
	this->mSupplier = supplier;
}

void Banana::set_supplier(string supplier) 
{
	this->mSupplier = supplier;
}

string Banana::get_supplier() 
{
	return this->mSupplier;
}

void Banana::show_banana_info() 
{ 
	PRINT_T("===Banana show_banana_info()");
}