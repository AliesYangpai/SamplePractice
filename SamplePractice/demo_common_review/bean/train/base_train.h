#pragma once
#include <iostream>
#define PRINT_T(T) cout << (T) << endl
using namespace std;
class BaseTrain {
private:
	string mName;
public:
	virtual ~BaseTrain();
    BaseTrain(string name);

	void set_name(string name);
	string get_name();

	void ShowCommonInfo();
	virtual void ShowTrainInfo();
	virtual void doWork() = 0;
};