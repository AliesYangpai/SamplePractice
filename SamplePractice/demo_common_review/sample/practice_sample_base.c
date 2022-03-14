#include "practice_sample_base_01.h"
void show_print_data_size() 
{
	char x = 'x';
	char y = 3;
	int a = 15;
	short b = 12;
	printf("%d %d \n",a,b);	
	printf("sizeof x = %d,sizeof a = %d,sizeof b = %d \n",sizeof(x),sizeof(a),sizeof(b));
 }

void show_print_data_arr()
{
	int arr[] = {1,2,3,4,5};
	int count = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < count; i++)
	{
		printf("arr[%d] = %d %p\n",i,arr[i],arr+i);
	}
}
