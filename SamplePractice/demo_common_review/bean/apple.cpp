#define _CRT_SECURE_NO_WARNINGS 1
#include "apple.h"
Apple::~Apple() 
{
	cout << "~Apple()" << endl;
}
Apple::Apple() {}
Apple::Apple(string name,string type):Fruit(name,type) {}
Apple::Apple(string name, string type, float price, string supplier):Fruit(name,type)
{
	this->mPrice = price;
	this->mSupplier = supplier;
}

void Apple::set_price(float price)
{
	this->mPrice = price;
}

void Apple::set_supplier(string supplier) 
{
	this->mSupplier = supplier;
}

float Apple::get_price() { return this->mPrice; }
string Apple::get_supplier() { return this->mSupplier; }