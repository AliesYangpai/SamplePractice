#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_mem_heap_method.h"
/*
  malloc 申请空间，size（byte）：空间总大小
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
  calloc 申请空间，num:对象数量，size(byte):每个对象的大小 
  calloc 申请空间后，会初始化每个空间的值为0
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
  realloc 申请空间，当前空间不够使用时，使用relloc申请空间
  realloc 如果p_raw 后面有足够空间，则在p_raw后面追加空间
		  如果p_raw 后面空间不足，则新申请new_size空间，之后将p_raw中的数据复制到新内存中，然后内部自动释放p_raw
		  new_szie(byte) 代表新的总内存大小
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