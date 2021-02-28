#define _CRT_SECURE_NO_WARNINGS 1
#include "order_file_operate.h"
void WriteOrderToFile(const char* file_name, Order* order) 
{
	// 1.�����ļ�������
	ofstream ofs;
	// 2.���ļ�
	ofs.open(file_name, ios::out);
	// 3.д����
	ofs << order->get_m_name() << endl;
	ofs << order->get_m_date() << endl;
	ofs << order->get_m_price() << endl;
	// 4.�ر�
	ofs.close();
}

Order* ReadOrderFromFile(const char* file_name,Order* order) 
{
	ifstream ifs;
	ifs.open(file_name, ios::in);
	ifs.close();
	return order;
}