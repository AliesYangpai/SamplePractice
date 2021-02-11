#pragma once
/*
  需要掌握的排序：
  1 冒泡排序 【已完成】【条件：样本数量很少，10个左右】
  2 选择排序 【已完成】【条件：样本数量很少，10个左右】
  3 插入排序 【正在处理】
  4 希尔排序
  5 归并排序
  6 快速排序
  7 堆排序
  8 计数排序
  9 桶排序
  10 基数排序
*/


/*
  1 冒泡排序 ：order: 1:asc,0:desc;
   两个两个比较
*/
void BubbleSortArrayInt(int* arr, const	int size, const	char order);
/*
  2 选择排序 ：order: 1:asc,0:desc;
  从数列中选出最大或最小，放到前面
*/
void SelectionSortArrayInt(int* arr, const int size, const char order);
/*
  3.插入排序：order: 1:asc,0:desc;
  扑克牌的起手排序~~
*/
void InsertionSortArrayInt(int* arr, const int size);