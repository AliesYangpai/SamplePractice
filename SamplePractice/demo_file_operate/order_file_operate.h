#pragma once
#include <iostream>
#include <fstream>
#include "bean/order.h"
#include  <fstream>
#include <string>
#define FILE_ORDER_PATH "my_order.txt"
using namespace std;
/*
 写文件
*/
void WriteOrderToFile(const char* file_name, Order* order);

/*
 读文件
*/
Order* ReadOrderFromFile(const char* file_neme, Order* order);