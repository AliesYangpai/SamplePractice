#pragma once
#include <iostream>
using namespace std;
class Fruit {
private:
	string mName;
	string mType;
public:
	Fruit();
	~Fruit();
	Fruit(string name, string type);

	void set_name(string name);
	void set_type(string type);
	string get_name();
	string get_type();
};