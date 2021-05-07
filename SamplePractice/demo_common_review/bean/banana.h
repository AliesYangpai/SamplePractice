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
	void show_common_info(); // ÆÕÍ¨º¯Êý
	virtual void show_banana_info(); // Ðéº¯Êý
};