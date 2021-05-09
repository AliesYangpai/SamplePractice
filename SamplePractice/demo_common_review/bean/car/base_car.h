#pragma once
#include <iostream>
#define PRINT_T(T) cout << T << endl
using namespace std;
class BaseCar {
private:
	string mName;
public:
	virtual ~BaseCar();
	BaseCar(string name);
	void set_mName(string name);
	string get_mName();
	
	void ShowCommonInfo();
	virtual void ShowCarInfo();
	virtual void DoWork() = 0; // ´¿Ðéº¯Êý
};