#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "bean/menu.h"
#define PRINT_T(T) cout << T << endl
using namespace std;
void GenerateVectorIntDataAndShow();
void AddDataVector(vector<int> * p_list, int param);
void DelDataVector(vector<int> * p_list, int param); // ������Ҫʹ��erase���������Ϊ������ָ��
void UpdateDataVector(vector<int> * p_list, int param,int index);
void ShowDataVector(vector<int> * p_list);

void AddDataMenuVector(vector<Menu*> * p_list, Menu* p_menu);
void InsertDataMenuVector(vector<Menu*> * p_list, Menu* p_meue,int pos);
void DelDataMenuVector(vector<Menu*> * p_list, string targetName); // ��������ɾ��
void UpdateDataMenuVector(vector<Menu*> * p_list, string targetName, string content); // �������Ƹ�������
void ShowDataMenuVector(vector<Menu*> *p_list);
void ShowDataMenuVector2(vector<Menu*> * p_list);
void ShowDataMenuVector3(vector<Menu*> * p_list);