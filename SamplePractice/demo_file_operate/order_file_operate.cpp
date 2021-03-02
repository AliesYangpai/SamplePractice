#define _CRT_SECURE_NO_WARNINGS 1
#include "order_file_operate.h"
/*
 д�ļ� ���ı�д����
*/
void WriteTextToFile(const char* file_name, Order* order)
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

/*
 ���ļ� ���ı���ȡ��ifs >> buffer
*/
void ReadTextFromFile1(const char* file_name)
{
	ifstream ifs;
	ifs.open(file_name, ios::in);
	if (!ifs.is_open()) 
	{
		PRINT_T("=== ReadTextFromFile1 open fail");
		return;
	}
	char buffer[512] = { 0 };
	while (ifs >> buffer) // ������һ��һ�еĶ�ȡ����
	{
		PRINT_T("=== ReadTextFromFile1 read line");
		PRINT_T(buffer);
	}
	ifs.close();
}

/*
 ���ļ� ���ı���ȡ��ifs.getline(buffer,sizeof(buffer))
*/
void ReadTextFromFile2(const char* file_name) 
{
	ifstream ifs;
	ifs.open(file_name, ios::in);
	if (!ifs.is_open()) 
	{
		PRINT_T("=== ReadTextFromFile2 open fail");
		return;
	}
	char buffer[512] = { 0 };
	while (ifs.getline(buffer,sizeof(buffer)))
	{
		PRINT_T("=== ReadTextFromFile2 read line");
		PRINT_T(buffer);
	}
	ifs.close();
}

/*
 ���ļ� ���ı���ȡ��ifs.getline(ifs,buffer) buffer ��string����
*/
void ReadTextFromFile3(const char* file_name) 
{
	ifstream ifs;
	ifs.open(file_name,ios::in);
	if (!ifs.is_open())
	{
		PRINT_T("=== ReadTextFromFile3 open fail");
		return;
	}
	string buffer;
	while (getline(ifs,buffer))
	{
		PRINT_T("=== ReadTextFromFile3 read line");
		PRINT_T(buffer);
	}
	ifs.close();
}

void ReadTextFromFile4(const char* file_name) 
{
	ifstream ifs;
	ifs.open(file_name, ios::in);
	if (!ifs.is_open())
	{
		PRINT_T("=== ReadTextFromFile4 open fail");
		return;
	}
	char c;
	while ((c = ifs.get()!= EOF))
	{
		PRINT_T("=== ReadTextFromFile4 read line");
		PRINT_T(c);
	}
	ifs.close();
}
