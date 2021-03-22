#pragma once
#include <iostream>
#include <string>
#include "bean/menu.h"
#include <map>
#define PRINT_T(T) cout << T << endl;
using namespace std;
void InsertDataMenuMap(map<string*, Menu*>* p_map, string* key ,Menu* p_menu);
void DeletDataMenuMap(map<string*, Menu*>* p_map, string* key);
void DeletDataMenuMap(map<string*, Menu*>* p_map, map<string*, Menu*>::iterator p_iterator);
void UpdateDataMenuMap(map<string*, Menu*>* p_map, string* key, Menu* p_menu);
void ShowDataMenuMap(map<string*, Menu*>* p_map);