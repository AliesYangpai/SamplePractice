#pragma once
#include <iostream>
#define PRINT_T(T) cout << (T) << endl
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