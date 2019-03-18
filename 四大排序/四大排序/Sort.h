#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <malloc.h>

//打印数组的函数
void PrintArray(int* array, int size);
void Swap(int* left, int* right);
int BinarySearch(int* array, int left, int right, int num);

//插入排序————直接插入排序和希尔排序
void InsertSort(int* array, int size);
void ShellSort(int* array, int size);
void InsertSort(int* array, int size);

//选择排序————选择排序和堆排序
void SelectSort(int* array, int size);
void HeapSort(int* array, int size);
void SelectSortOP(int* array, int size);
void HeapAdJust(int* array, int size);

//交换排序
void BubbleSort(int* array, int size);//冒泡排序
void QuickSort(int* array, int left, int right);//快速排序
void MergeSort(int* array, int size);//归并排序


#endif //__SORT_H__