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
	////  ����---��һ��
	//vector<int>::iterator begin = p_list->begin();// ָ�������е���Ԫ�ص�ָ��
	//vector<int>::iterator end = p_list->end(); // ָ�������е����һ��Ԫ�ص���һ��λ��
	//while (begin != end)
	//{
	//	PRINT_T(*begin);
	//	begin++;
	//}

	////  ����---�ڶ���
	//for (vector<int> ::iterator p_value = p_list->begin(); p_value < p_list->end(); p_value++)
	//{
	//	PRINT_T(*p_value);
	//}

	// ����---������ ʹ��stl�ṩ�ı����㷨 for_earch (Դ����Ҳ��ָ��++���ж���Ԫ�ص�ַ��last+1)
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


// stl vector�Զ������͵���ɾ�Ĳ�
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
// ��������ɾ��
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
// �������Ƹ�������
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
// չʾ�˵�����
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