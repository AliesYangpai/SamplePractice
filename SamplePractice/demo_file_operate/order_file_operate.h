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
 д�ļ� ���ı�д����
*/
void WriteTextToFile(const char* file_name, Order* order);

/*
 ���ļ� ���ı���ȡ��ifs >> buffer
*/
void ReadTextFromFile1(const char* file_neme);

/*
 ���ļ� ���ı���ȡ��ifs.getline(buffer,sizeof(buffer))
*/
void ReadTextFromFile2(const char* file_name);

/*
 ���ļ� ���ı���ȡ��getline(ifs,buffer) buffer ��string����
*/
void ReadTextFromFile3(const char* file_name);

/*
 ���ļ� ���ı���ȡ��(c= ifs.get())!= EOF EOF ��end of file����
*/
void ReadTextFromFile4(const char* file_name);