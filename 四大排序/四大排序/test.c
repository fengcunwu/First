#include "Sort.h"

int main()
{
	//int array[] = { 2, 6, 4, 9, 3, 8, 0, 7, 1, 5 };
	//int array[] = { 1, 2, 3, 4, 5, 9, 8, 7 };
	int array[] = { 2, 6, 4, 3, 5, 8, 0, 7, 1, 9, };
	int size = sizeof(array) / sizeof(array[0]);
	printf("����ǰ��");
	PrintArray(array, size);
	printf("�����");
	//InsertSort(array, size);
	//printf("ֱ�Ӳ��������");
	//ShellSort(array, size);
	//SelectSort(array, size);
	//SelectSortOP(array, size);
	HeapSort(array, size);
	//BubbleSort(array, size);
	//QuickSort(array, 0, size);//��������ҿ�����
	//MergeSort(array, size);
	PrintArray(array, size);
	system("pause");
	return 0;
}