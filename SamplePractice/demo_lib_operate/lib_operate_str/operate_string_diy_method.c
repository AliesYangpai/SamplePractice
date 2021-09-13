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

char * diy_my_strcpy(char * dst, const char * src)
{
	assert(dst != NULL && src != NULL);
// method 1:
	//while (*src != '\0')
	//{
	//	*des = *src;
	//	des++;
	//	src++;
	//}
	//*des = *src;
	//return des;
// method 2: 
	// https://baike.baidu.com/item/%E8%BF%90%E7%AE%97%E7%AC%A6%E4%BC%98%E5%85%88%E7%BA%A7/4752611
	while (*dst++ = *src++) { ; }
	return dst;
}

char * diy_my_strcat(char * dst, const char * src)
{
	assert(dst != NULL && src != NULL);
		while (*dst != '\0')
		{
			dst++;
		}
		while (*dst++ = *src++);
		// while (*(dst++) = *(src++)); 
		//   Set the character src points to to the character dst points to.
		//   Increment both dst and src
	    //   If the character was '\0', end the loop.
	    //   Otherwise, repeat.
	return dst;
}
