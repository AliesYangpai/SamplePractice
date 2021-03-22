#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_map.h"
void InsertDataMenuMap(map<string*, Menu*>* p_map, string* key, Menu* p_menu)
{
	// 这里插入的是对组
	p_map->insert(make_pair(key, p_menu));
}
void DeletDataMenuMap(map<string*, Menu*>* p_map, string* key)
{
	if (p_map == NULL || p_map->empty())
	{
		return;
	}
	if (key == NULL)
	{
		return;
	}
	for (map<string*,Menu*>::iterator p_value = p_map->begin(); p_value != p_map->end(); p_value++)
	{
		if (p_value->first->compare(*key) == 0)
		{
			p_map->erase(key);
			//p_map->erase(p_value);
			break;
		}
	}
}
void DeletDataMenuMap(map<string*, Menu*>* p_map, map<string*, Menu*>::iterator p_iterator)
{
	if (p_map == NULL || p_map->empty())
	{
		return;
	}

	p_map->erase(p_iterator);

}
void UpdateDataMenuMap(map<string*, Menu*>* p_map, string* key, Menu* p_menu)
{
	if (p_map == NULL || p_map->empty())
	{
		return;
	}
	if (key == NULL)
	{
		return;
	}
	if (p_menu == NULL)
	{
		return;
	}

	for (map<string*, Menu*>::iterator p_value = p_map->begin(); p_value != p_map->end(); p_value++)
	{
		// 使用compare的时候需要判断0
		if (p_value->first->compare(*key) == 0)
		{
			*(p_value->second) = *p_menu;
			break;
		}
	}
}
void ShowDataMenuMap(map<string*, Menu*>* p_map)
{
	if (p_map == NULL)
	{
		return;
	}
	for (map<string*, Menu*>::iterator p_value = p_map->begin(); p_value != p_map->end(); p_value++)
	{
		PRINT_T(*(p_value->first));
		p_value->second->ShowInfo();
	}
}