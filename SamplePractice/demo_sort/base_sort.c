#define _CRT_SECURE_NO_WARNINGS 1
#include "base_sort.h"
//1 ð������ ��order: 1:asc,0:desc; 
void BubbleSortArrayInt(int* arr, const	int size, const	char order)
{
	int i;
	for (i = 0; i < size - 1; i++)
	{
		int j;
		char flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (order)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = 1;
				}
			}
			else
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = 1;
				}
			}

		}
		if (!flag)
		{
			break;
		}
	}
}
//2 ѡ������ ��order: 1:asc,0:desc; 
void SelectionSortArrayInt(int* arr, const int size, const char order)
{
	int i;
	for (i = 0; i < size - 1; i++)
	{
		int targetIndex = i;
		int j;
		for (j = i+1; j < size; j++)
		{
			if (order)
			{
				// �����asc����Ӧ��ѡ����Сֵ
				if (arr[targetIndex] > arr[j])
				{
					targetIndex = j;
				}
			}
			else
			{
				// �����desc����Ӧ��ѡ���ֵ
				if (arr[targetIndex] < arr[j])
				{
					targetIndex = j;
				}
			}
		}
		int temp = arr[i];
		arr[i] = arr[targetIndex];
		arr[targetIndex] = temp;
	}
}
//3.��������order: 1:asc,0:desc;  �˿��Ƶ���������~~
void InsertionSortArrayInt(int* arr, const int size) 
{
	int i;
	for ( i = 1; i < size; i++)
	{

	}
}

