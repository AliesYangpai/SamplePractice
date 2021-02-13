#pragma once
#include <assert.h>
#include <string.h>
/*
  ��Ҫ���յ�����:
  1 ���ַ�����-�ַ����� strlen  ���ص㡿��1.��'\0'��Ϊ������յ㡿
  2.�ַ�������-ȫ������ strcpy  ���ص㡿��1.��'\0'��Ϊ������յ㣬���������������ַ�����
  3.�ַ�������-�������� strncpy ���ص㡿��1.���Ჹ�临��'\0'��
  4.�ַ���׷��-ȫ��׷�� strcat  ���ص㡿��1.��'\0'��Ϊ������յ㣬��׷�ӹ�������dest����Ҫ��'\0'��
  5.�ַ���׷��-����׷�� strncat ���ص㡿��1.��'\0'��Ϊ������յ㣬��׷�ӹ�������dest����Ҫ��'\0'��
  6.�ַ����Ƚ�-ȫ���Ƚ� strcmp  ���ص㡿���˴��Ƚϵ���ASCiiֵ���� ret < 0,ret = 0,ret > 0��
  7.�ַ����Ƚ�-�����Ƚ� strncmp ���ص㡿���˴��Ƚϵ���ASCIIֵ���� ret < 0,ret = 0,ret > 0��
  8.�ַ�������-ȫ������ strstr  ���ص㡿����
*/
// 1 �ַ�������
int Get_strlen(const char* c);
// 2 �ַ���������ȫ������+'\0'��
char* Do_strcpy(char * dest, const char* src);
// 3.�ַ�������������������
char* Do_strncpy(char* dest, const char* src, size_t num);
// 4.�ַ���׷�� (ȫ��׷��+'\0')
char* Do_strcat(char* dest, const char* src);
// 5.�ַ���׷�ӣ�����׷�ӣ�
char* Do_strncat(char * dest, const char* src, size_t num);
// 6.�ַ����Ƚϣ�ȫ���Ƚϣ� 
int Do_strcmp(const char* lhs, const char* rhs);
// 7.�ַ����Ƚϣ������Ƚϣ�
int Do_strncmp(const char* lhs, const char* rhs, size_t num);
// 8.�ַ������ң�ȫ�����ң�
char* Do_strstr(const char* str,const char* substr);
// 9.�ַ�����ȡ
char* Do_strtok(char* str, const char* delim);