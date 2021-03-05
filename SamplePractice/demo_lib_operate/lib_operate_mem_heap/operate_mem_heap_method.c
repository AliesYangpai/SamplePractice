#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_mem_heap_method.h"
/*
  malloc ����ռ䣬size��byte�����ռ��ܴ�С
*/
void Do_malloc(size_t size) 
{
  printf("===Do_malloc ");
  int* arr = malloc(size);
  if (arr ==NULL)
  {
	  return;
  }
  int count = size / sizeof(int);
  for (size_t i = 0; i < count; i++)
  {
	  arr[i] = i * 10;
  }

  for (size_t i = 0; i < count; i++)
  {
	  printf("%d ", arr[i]);;
  }
  printf("\n");
  free(arr);
  arr = NULL;
  
}
/*
  calloc ����ռ䣬num:����������size(byte):ÿ������Ĵ�С 
  calloc ����ռ�󣬻��ʼ��ÿ���ռ��ֵΪ0
*/
void Do_calloc(size_t num, size_t size) 
{
	printf("===Do_calloc ");
	int* arr = calloc(num, size);
	if (arr == NULL)
	{
		return;
	}
	for (size_t i = 0; i < num; i++)
	{
		arr[i] = i * 10;
	}
	for (size_t i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	arr = NULL;
}

/*
  realloc ����ռ䣬��ǰ�ռ䲻��ʹ��ʱ��ʹ��relloc����ռ�
  realloc ���p_raw �������㹻�ռ䣬����p_raw����׷�ӿռ�
		  ���p_raw ����ռ䲻�㣬��������new_size�ռ䣬֮��p_raw�е����ݸ��Ƶ����ڴ��У�Ȼ���ڲ��Զ��ͷ�p_raw
		  new_szie(byte) �����µ����ڴ��С
*/
void Do_realloc(int* p_raw, size_t new_size) 
{
	printf("===Do_realloc ");
	if (p_raw == NULL)
	{
		printf("p_raw is null");
		return;
	}
   int* p = realloc(p_raw, new_size);
   if (p != NULL)
   {
	   p_raw = p;
   }

   for (size_t i = 0; i < new_size / sizeof(int); i++)
   {
	   printf("%d ", p_raw[i]);
   }
   printf("\n");
   free(p_raw);
   p_raw == NULL;
}