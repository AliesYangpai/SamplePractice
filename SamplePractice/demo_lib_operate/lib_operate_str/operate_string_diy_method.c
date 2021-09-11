#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_string_diy_method.h"
int  diy_my_strlen(const char* p) 
{
	assert(p != NULL);
	int count = 0;
	while (*p != '\0')
	{
		p++;  // attention£¬this p++ not influence on original arr because when pass param in 
			  // param will be copy to a new one to use in method, has non business with original
		count++;
	}
	return count;
}