#pragma once
#include <iostream>
using namespace std;
class GpuBase 
{
private:
	int m_id;
	string m_name;
	string m_brand;
public:
	~GpuBase();
	GpuBase();
	GpuBase(string name, string brand);
	GpuBase(int id, string name, string brand);
	void set_m_id(int id);
	void set_m_name(string name);
	void set_m_brand(string brand);
	
	int get_m_id();
	string get_m_name();
	string get_m_brand();

	virtual void DoGpuCalculate() = 0;
};