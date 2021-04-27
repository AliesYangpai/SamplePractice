#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Apple {
private:
	int m_id;
	string m_name;
	float m_price;

public:
	Apple();
	~Apple();
	Apple(int id, string name, float price);

	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_price(float price);
	int get_m_id();
	string get_m_name();
	float get_m_price();
};