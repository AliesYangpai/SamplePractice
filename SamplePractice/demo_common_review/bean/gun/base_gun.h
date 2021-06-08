#pragma once
#include <iostream>
#define PRINT_T(T,F) cout << T << "\t" << F << endl;
using namespace std;
class BaseGun {
private:
	string mName;
public:
	~BaseGun();
	BaseGun(string name);
	void set_mName(string name);
	string get_mName();
	virtual void showInfo();
	virtual void showExtraInfo();
	virtual void doWork() = 0;
};