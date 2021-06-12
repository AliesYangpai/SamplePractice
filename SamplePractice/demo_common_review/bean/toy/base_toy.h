#pragma once
#include <iostream>
#define PRINT_T(T) cout << T << endl;
using namespace std;
class BaseToy 
{
private:
	string mName;
	float mPrice;

public:
	virtual ~BaseToy();
	BaseToy(string name);
	BaseToy(string name, float price);
 
	void set_mName(string name);
	string get_mName();
	void set_mPrice(float price);
	float get_mPrice();

	
	virtual void showInfo();
	virtual void showExtraInfo();
	virtual void doWork() = 0;
};