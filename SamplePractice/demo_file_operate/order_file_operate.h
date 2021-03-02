#pragma once
#include <iostream>
#include <fstream>
#include "bean/order.h"
#include  <fstream>
#include <string>
#define FILE_ORDER_PATH "my_order.txt"
#define PRINT_T(T) cout << T << endl
using namespace std;
/*
 写文件 【文本写出】
*/
void WriteTextToFile(const char* file_name, Order* order);

/*
 读文件 【文本读取】ifs >> buffer
*/
void ReadTextFromFile1(const char* file_neme);

/*
 读文件 【文本读取】ifs.getline(buffer,sizeof(buffer))
*/
void ReadTextFromFile2(const char* file_name);

/*
 读文件 【文本读取】getline(ifs,buffer) buffer 是string类型
*/
void ReadTextFromFile3(const char* file_name);

/*
 读文件 【文本读取】(c= ifs.get())!= EOF EOF 是end of file类型
*/
void ReadTextFromFile4(const char* file_name);