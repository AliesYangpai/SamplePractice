#define _CRT_SECURE_NO_WARNINGS 1
#include "peach.h"
Peach::Peach() {}
Peach::~Peach() 
{
	cout << "~Peach()" << endl;
}
Peach::Peach(string name, string type):Fruit(name, type) {}
Peach::Peach(string name, string type, float price, string supplier) : Fruit(name, type) 
{
	this->mPrice = price;
	this->mSupplier = supplier;
}

void Peach::set_price(float price) 
{
	this->mPrice = price;
}
void Peach::set_supplier(string supplier) 
{
	this->mSupplier = supplier;
}

float Peach::get_price()  
{
	return this->mPrice;
}

string Peach::get_supplier() 
{
	return this->mSupplier;
}