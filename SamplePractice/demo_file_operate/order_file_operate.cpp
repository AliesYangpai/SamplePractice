#define _CRT_SECURE_NO_WARNINGS 1
#include "order_file_operate.h"
/*
 写文件 【文本写出】
*/
void WriteTextToFile(const char* file_name, Order* order)
{
	// 1.创建文件流对象
	ofstream ofs;
	// 2.打开文件
	ofs.open(file_name, ios::out);
	// 3.写内容
	ofs << order->get_m_name() << endl;
	ofs << order->get_m_date() << endl;
	ofs << order->get_m_price() << endl;
	// 4.关闭
	ofs.close();
}

/*
 读文件 【文本读取】ifs >> buffer
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
	while (ifs >> buffer) // 这里是一行一行的读取数据
	{
		PRINT_T("=== ReadTextFromFile1 read line");
		PRINT_T(buffer);
	}
	ifs.close();
}

/*
 读文件 【文本读取】ifs.getline(buffer,sizeof(buffer))
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
 读文件 【文本读取】ifs.getline(ifs,buffer) buffer 是string类型
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

/*
 读文件 【文本读取】(c= ifs.get())!= EOF EOF 是end of file类型
*/
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

/*
 写文件 【二进制写出】
*/
void WriteBinaryToFile(const char* file_name, Order* order) 
{
	ofstream ofs(FILE_ORDER_PATH_BINARY,ios::out|ios::binary);
	ofs.write((const char*)order, sizeof(*order)); // 此处强转
	ofs.close();
}
/*
 读文件 【二进制读入】
*/
Order* ReadBinaryFromFile(const char* file_name, Order* order) 
{
	ifstream ifs;
	ifs.open(file_name, ios::in | ios::binary);
	if (!ifs.is_open()) 
	{
		PRINT_T("=== ReadTextFromFile4 open fail");
		return order;
	}
	ifs.read((char*)order,sizeof(*order));
	ifs.close();
	return order;
}