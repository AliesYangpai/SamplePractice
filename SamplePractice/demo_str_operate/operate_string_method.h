#pragma once
#include <assert.h>
#include <string.h>
/*
  ��Ҫ���յ�����:
  1 ���ַ�����-�ַ����� ���ص㡿��1.��'\0'��Ϊ������յ㡿
  2.�ַ�������-ȫ������ ���ص㡿��1.��'\0'��Ϊ������յ㣬���������������ַ�����
  3.�ַ�������-�������� ���ص㡿��1.���Ჹ�临��'\0'��
  4.�ַ���׷��-ȫ��׷�� ���ص㡿��1.��'\0'��Ϊ������յ㣬��׷�ӹ�������dest����Ҫ��'\0'��
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