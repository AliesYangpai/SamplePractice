#pragma once
#include <iostream>
#include "friut.h"
using namespace std;
class Peach:public Fruit {
private:
	float mPrice; // �۸�
	string mSupplier; // ��Ӧ��
public:
	~Peach();
	Peach();
	Peach(string name, string type);
	Peach(string name, string type, float price, string supplier);
	void set_price(float price);
	void set_supplier(string supplier);
	float get_price();
	string get_supplier();
};