#pragma once
#include <iostream>
#include <list>
#include "bean/menu.h"
#define PRINT_T(T) cout << T << endl
using namespace std;
/*
  ��c++��list�������������һ����java���ǲ�һ����
*/
void AddDataMenuList(list<Menu*>* p_list, Menu* p_menu);
void ShowDataMenuList(const list<Menu*>* p_list);