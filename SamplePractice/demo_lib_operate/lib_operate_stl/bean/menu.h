#pragma once
#include <iostream>
#include <string>
using namespace std;
class Menu 
{
private:
	string m_name;
	string m_content;
	float m_price;
public:
	~Menu();
	Menu();
	Menu(string name, string content, float price);

	void ShowInfo();

	void set_m_name(string name);
	void set_m_content(string content);
	void set_m_price(float price);
	string get_m_name();
	string get_m_content();
	float get_m_price();
	bool operator==(string p_param);
};