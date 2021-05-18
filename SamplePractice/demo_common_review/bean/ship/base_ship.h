#pragma once
#include <iostream>
#define PRINT_T(T) cout << (T) << endl
using namespace std;
class BaseShip {
private:
	string mName;

public:
	virtual ~BaseShip();
	BaseShip(string name);
	void set_mName(string name);
	string get_mName();

	void showCommonInfo();
	virtual void showShipInfo();
	virtual void doWork() = 0;
};