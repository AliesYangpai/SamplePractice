#pragma once
#include <assert.h>
#include <string.h>
/*
  ��Ҫ���յ����ݣ����ڴ���������������ܹ������ַ��������ܹ������������ͺ������������ͣ�������
  1.�ڴ濽�� memcpy
  2.�ڴ濽�� memmove ר�Ŵ����ڴ��ص������
  3.�ڴ�Ƚ� memcmp �Ƚ�ָ��ָ��ֵ�ĸ���
  4.�ڴ����� memset ��һ���ڴ�������ֵ
*/
// 1.�ڴ濽����num����Ҫ�������ֽ���
void* Do_memcpy(void* dest, const void* src, size_t num);
// 2.�ڴ濽���������ڴ��ص������
void* Do_memmove(void* dest, const void* src, size_t num);
// 3.�ڴ�Ƚ�  �Ƚ�ָ��ָ��ֵ��ָ�������ֽ�
int Do_memcmp(void* lhs, const void* rhs, size_t num);
// 4.�ڴ�����  ��һ��ָ���ڴ�������ֵ
void* Do_memset(void* dest, int ch, size_t num);