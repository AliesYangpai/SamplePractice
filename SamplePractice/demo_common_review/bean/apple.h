#pragma once
#include <iostream>
#include <string.h>
#include "friut.h"
using namespace std;
class Apple :public Fruit{

private:
	float mPrice;
	string mSupplier;
public:
	~Apple();
	Apple();
	Apple(string name, string type);
	Apple(string name, string type, float price, string supplier);
	void set_price(float price);
	void set_supplier(string supplier);
	float get_price();
	string get_supplier();
};