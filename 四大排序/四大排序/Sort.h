#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <malloc.h>

//��ӡ����ĺ���
void PrintArray(int* array, int size);
void Swap(int* left, int* right);
int BinarySearch(int* array, int left, int right, int num);

//�������򡪡�����ֱ�Ӳ��������ϣ������
void InsertSort(int* array, int size);
void ShellSort(int* array, int size);
void InsertSort(int* array, int size);

//ѡ�����򡪡�����ѡ������Ͷ�����
void SelectSort(int* array, int size);
void HeapSort(int* array, int size);
void SelectSortOP(int* array, int size);
void HeapAdJust(int* array, int size);

//��������
void BubbleSort(int* array, int size);//ð������
void QuickSort(int* array, int left, int right);//��������
void MergeSort(int* array, int size);//�鲢����


#endif //__SORT_H__