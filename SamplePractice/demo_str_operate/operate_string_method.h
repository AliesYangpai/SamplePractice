#pragma once
#include <assert.h>
#include <string.h>
/*
  ��Ҫ���յ�����:
  1 ���ַ����� ���ص㡿��1.��'\0'��Ϊ������յ㡿
  2.�ַ�������-ȫ���滻 ���ص㡿��1.��'\0'��Ϊ������յ㡿���ַ����� 
  3.�ַ�������-�����滻 ���ص㡿��1.���Ჹ�临��'\0'��
*/
// 1 �ַ�������
int Get_strlen(const char* c);
// 2 �ַ���������ȫ���滻��
char* Do_strcpy(char * dest, const char* src);
// 3.�ַ��������������滻��
char* Do_strncpy(char* dest, const char* src,size_t num);