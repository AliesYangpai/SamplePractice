#pragma once
#include <iostream>
using namespace std;
class MemoryBankBase
{
private:
	int m_id;
	string m_name;
	string m_brand;
public:
	~MemoryBankBase();
	MemoryBankBase();
	MemoryBankBase(string name, string brand);

	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_brand(string brand);

	int get_m_id();
	string get_m_name();
	string get_m_brand();

	virtual void DoMemoryBankCalculate() = 0;
};