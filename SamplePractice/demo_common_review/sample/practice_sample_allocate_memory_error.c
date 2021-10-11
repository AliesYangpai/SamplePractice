#include "practice_sample_allocate_memory_error.h"

/*
 error:no pointer check()
*/
void error_1_no_pointer_check()
{
	//const int length = 5;
	//int* p = malloc(5 * sizeof(int));
	//for (size_t i = 0; i < length; i++)
	//{
	//	*(p + i) = i;// error line allocate pointer not check
	//}
	//for (size_t i = 0; i < length; i++)
	//{
	//	printf("p[%d] %d \n",p[i]);
	//}
	//free(p);
	//p = NULL;
}

/*
 error:allocate pointer out of bounds
*/
void error_2_pointer_out_of_bounds()
{
	//int length = 5;
	//int* p = calloc(length, sizeof(int));
	//for (size_t i = 0; i < 6; i++) 	// error line: pointer access out of bounds
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
}

/*
 error:not free allcate pointer
*/
void error_3_free_pointer_not_mem_operate()
{
	//int arr[] = { 11,22,33 };
	//int length = sizeof(arr) / sizeof(arr[0]);
	//for (size_t i = 0; i < length; i++)
	//{
	//	printf("arr[%d]=%d", i, arr[i]);
	//}
	//free(arr); // error line free wrong
}

/*
 error pointer change
*/
void error_4_pointer_change()
{
	//const int length = 5;
	//int* p = calloc(length, sizeof(int));
	//for (size_t i = 0; i < length; i++)
	//{
	//	*p++ = i; // error line: here change the pointer,remeber p should be the first pos of allocating mem block
	//}
}
