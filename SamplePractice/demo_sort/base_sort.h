#pragma once
/*
  ��Ҫ���յ�����
  1 ð������ ������ɡ��������������������٣�10�����ҡ�
  2 ѡ������ ������ɡ��������������������٣�10�����ҡ�
  3 �������� �����ڴ���
  4 ϣ������
  5 �鲢����
  6 ��������
  7 ������
  8 ��������
  9 Ͱ����
  10 ��������
*/


/*
  1 ð������ ��order: 1:asc,0:desc;
   ���������Ƚ�
*/
void BubbleSortArrayInt(int* arr, const	int size, const	char order);
/*
  2 ѡ������ ��order: 1:asc,0:desc;
  ��������ѡ��������С���ŵ�ǰ��
*/
void SelectionSortArrayInt(int* arr, const int size, const char order);
/*
  3.��������order: 1:asc,0:desc;
  �˿��Ƶ���������~~
*/
void InsertionSortArrayInt(int* arr, const int size);