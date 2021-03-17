#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "bean/menu.h"
#define PRINT_T(T) cout << T << endl
using namespace std;
void GenerateVectorIntDataAndShow();
void AddDataVector(vector<int> * p_list, int param);
void DelDataVector(vector<int> * p_list, int param); // 这里需要使用erase方法，入参为迭代器指针
void UpdateDataVector(vector<int> * p_list, int param,int index);
void ShowDataVector(vector<int> * p_list);

void AddDataMenuVector(vector<Menu*> * p_list, Menu* p_menu);
void InsertDataMenuVector(vector<Menu*> * p_list, Menu* p_meue,int pos);
void DelDataMenuVector(vector<Menu*> * p_list, string targetName); // 按照名称删除
void UpdateDataMenuVector(vector<Menu*> * p_list, string targetName, string content); // 按照名称更新数据
void ShowDataMenuVector(vector<Menu*> *p_list);
void ShowDataMenuVector2(vector<Menu*> * p_list);
void ShowDataMenuVector3(vector<Menu*> * p_list);