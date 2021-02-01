#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void PrintArrayInt(const int* arr, const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}