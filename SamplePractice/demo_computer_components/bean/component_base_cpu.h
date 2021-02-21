#pragma once
#include <iostream>
using namespace std;
#include <string>
class CpuBase
{
private:
	int m_id;
	string m_name;
	string _brand;
public:
	~CpuBase();
	CpuBase();
	CpuBase(string name, string brand);
	CpuBase(int id, string name, string brand);

	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_brand(string name);
	int get_m_id();
	string get_m_name();
	string get_m_brand();
	virtual void DoCalculate() = 0;

};