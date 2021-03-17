#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_vector.h"

void ShowPrintData(int data)
{
	PRINT_T(data);
}


void GenerateVectorIntDataAndShow()
{
	int arr[] = { 11,22,33,44,55,66,77,88,99 };
	vector<int> *p_list = new vector<int>();

	int arrCount = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < arrCount; i++)
	{
		p_list->push_back(arr[i]);
	}
	////  遍历---第一种
	//vector<int>::iterator begin = p_list->begin();// 指向容器中的首元素的指针
	//vector<int>::iterator end = p_list->end(); // 指向容器中的最后一个元素的下一个位置
	//while (begin != end)
	//{
	//	PRINT_T(*begin);
	//	begin++;
	//}

	////  遍历---第二种
	//for (vector<int> ::iterator p_value = p_list->begin(); p_value < p_list->end(); p_value++)
	//{
	//	PRINT_T(*p_value);
	//}

	// 遍历---第三种 使用stl提供的遍历算法 for_earch (源码中也是指针++，判断首元素地址与last+1)
	for_each(p_list->begin(), p_list->end(), ShowPrintData);
	delete p_list;
}


void AddDataVector(vector<int> * p_list, int param)
{
	PRINT_T("===AddDataVector");
	p_list->push_back(param);
}
void DelDataVector(vector<int> * p_list, int param)
{
	PRINT_T("===DelDataVector");
	for (vector<int>::iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		if (*p_value == param)
		{
			p_list->erase(p_value);
			break;
		}
	}
}
void UpdateDataVector(vector<int> * p_list, int param,int index)
{
	PRINT_T("===UpdateDataVector");
	int count = 0;
	for (vector<int>::iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		if (count == index)
		{
			*p_value = param;
			break;
		}
		count++;
	}
}
void ShowDataVector(vector<int> * p_list)
{
	PRINT_T("===ShowDataVector");
	for (vector<int>::iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		PRINT_T(*p_value);
	}
}


// stl vector自定义类型的增删改查
void AddDataMenuVector(vector<Menu*> * p_list, Menu* p_menu) 
{
	p_list->push_back(p_menu);
}

void InsertDataMenuVector(vector<Menu*> * p_list , Menu* p_menu, int pos) 
{
	int count = 0;
	if (p_list->capacity() < pos)
	{
		return;
	}
	for (vector<Menu*>::iterator p_value = p_list->begin();p_value != p_list->end();p_value++) 
	{
		if (count == pos)
		{
			p_list->insert(p_value, p_menu);
			break;
		}
		count++;
	}
}
// 按照名称删除
void DelDataMenuVector(vector<Menu*> * p_list, string targetName)
{
	for (vector<Menu*>::iterator p_value= p_list->begin(); p_value != p_list->end(); p_value++)
	{
		string name = (*p_value)->get_m_name();
		if (name.compare(targetName))
		{
			p_list->erase(p_value);
			break;
		}
	}
}
// 按照名称更新数据
void UpdateDataMenuVector(vector<Menu*> * p_list, string targetName, string content) 
{
	for (vector<Menu*>::iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		if ((*p_value)->get_m_name().compare(targetName)) 
		{
			(*p_value)->set_m_content(content);
			break;
		}
	}
}
// 展示菜单数据
void ShowDataMenuVector(vector<Menu*> *p_list) 
{
	for (vector<Menu*>::iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		(*p_value)->ShowInfo();
	}
}

void ShowDataMenuVector2(vector<Menu*> * p_list) 
{
	for (size_t i = 0; i < p_list->size(); i++)
	{
		p_list->at(i)->ShowInfo();
	}
}
void ShowDataMenuVector3(vector<Menu*> * p_list) 
{
	for (size_t i = 0; i < p_list->size(); i++)
	{
		(*p_list)[i]->ShowInfo();
	}
}