#define _CRT_SECURE_NO_WARNINGS 1
#include "base_sort.h"
void BubbleSortArrayInt(int* arr, const	int size, const	char order) 
{
	int i;
	for ( i = 0; i < size - 1; i++)
	{
		int j;
		char flag = 0;
		for ( j = 0; j < size - i - 1; j++)
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
				if (arr[j] < arr[j+1])
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