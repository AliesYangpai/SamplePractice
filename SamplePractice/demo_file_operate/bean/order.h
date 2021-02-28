#pragma once
#include <iostream>
using namespace std;
class Order 
{
private:
	int m_id;
	string m_name;
	string m_date;
	float m_price;

public:
	~Order();
	Order();
	Order(string name, string date, float price);

	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_date(string date);
	void set_m_price(float price);
	
	int get_m_id();
	string get_m_name();
	string get_m_date();
	float get_m_price();
};