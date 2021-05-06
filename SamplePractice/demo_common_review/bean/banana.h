#pragma once
#include "friut.h"
class Banana:public Fruit{
private:
	string mSupplier;
public:
	~Banana();
	Banana(string name, string type);
	Banana(string name, string type, string supplier);
	
	void set_supplier(string supplier);
	string get_supplier();
	void show_banana_info(); // ÆÕÍ¨º¯Êı
};