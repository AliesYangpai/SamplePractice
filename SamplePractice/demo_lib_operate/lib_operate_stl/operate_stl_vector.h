#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#define PRINT_T(T) cout << T << endl
using namespace std;
void GenerateVectorIntDataAndShow();
void AddDataVector(vector<int> * p_list, int param);
void DelDataVector(vector<int> * p_list, int param); // 这里需要使用erase方法，入参为迭代器指针
void UpdateDataVector(vector<int> * p_list, int param,int index);
void ShowDataVector(vector<int> * sp_list);