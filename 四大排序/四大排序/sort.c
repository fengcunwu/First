#include "Sort.h"

void PrintArray(int* array, int size)
{
	int i = 0;
	assert(array);

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void Swap(int* left, int* right)
{
	int temp = 0;
	assert(left && right);
	temp = *left;
	*left = *right;
	*right = temp;
}

int BinarySearch(int* array, int left, int right, int num)
{
	int mid = left + (right - left) / 2;
	if (array[mid] > num)
		return BinarySearch(array, left, mid - 1, num);
	
}

void InsertSort(int* array, int size)//��������
{
	int i = 1;
	assert(array);
	for (i = 1; i < size; i++)
	{
		int end = i - 1;
		int key = array[i];
		while (end >= 0 && key < array[end])
		{
			array[end + 1] = array[end];
			end--;
		}
		array[end + 1] = key;
	}
}

void ShellSort(int* array, int size)
{
	int gap = 3;
	int i = 1;
	assert(array);

	while (gap > 0)
	{
		for (i = 1; i < size - 2; i++)
		{
			int end = i - 1;
			int key = array[gap + end];
			while (end >= 0 && key < array[end])
			{
				array[end + gap] = array[end];
				end -= gap;
			}
			array[end + gap] = key;
		}
		gap--;
	}
}

//void InsertSort(int* array, int size)
//{
//	int i = 0;
//	assert(array);
//
//	if (array[0] > array[1])
//		Swap(&array[0], &array[1]);
//	for (i = 2; i < size; i++)
//	{
//		BinarySearch(array, 0, i - 1, array[i]);
//	}
//}

void SelectSort(int* array, int size)
{
	int i = 0, j = 0;
	int maxpos = 0;
	assert(array);
	for (i = 0; i < size; i++)
	{
		maxpos = 0;
		for (j = 1; j < size - i; j++)
		{
			if (array[j] > array[maxpos])
				maxpos = j;
		}
		if (maxpos != size - 1 - i)
			Swap(&array[size - 1 - i], &array[maxpos]);
	}
}

void SelectSortOP(int* array, int size)
{
	int i = 0, j = 0;
	int maxpos = 0, minpos = 0;
	assert(array);

	for (i = 0; i < size - 1; i++)
	{
		maxpos = 0;
		minpos = 0;
		for (j = 1; j < size - i; j++)
		{
			if (array[maxpos] < array[j])
				maxpos = j;
			if (array[minpos] > array[j])
				minpos = j;
		}

		if (maxpos != size - 1 - i)
			Swap(&array[maxpos], &array[size - 1 - i]);

		if (minpos == size - 1 - i)
			minpos = maxpos;

		if (minpos != 0)
			Swap(&array[minpos], &array[0]);
	}

}

void HeapAdJust(int* array, int size, int root)
{
	int child = 0;
	assert(array);
	//�������Ҷ�ӽڵ�ĸ��ڵ���±�
	child = root * 2 + 1;

	while (child < size)
	{
		//�ڱ��ڵ�����Һ������ҵ�����
		if (child + 1 < size && array[child] < array[child + 1])
			child++;

		if (array[child] > array[root])
		{
			Swap(&array[child], &array[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
			return;
			
	}
}

void HeapSort(int* array, int size)
{
	int root = 0, i = 0;
	assert(array);
	//����
	root = (size - 2) / 2;
	for (i = root; i >= 0; i--)
		HeapAdJust(array, size, i);
	//���򣬽���һ��Ԫ�غ����һ��Ԫ�ؽ���Ȼ���ڵ���
	for (i = 0; i < size; i++)
	{
		Swap(&array[0], &array[size - 1 - i]);//���ѽ��������Ԫ���ڶѶ���Ҳ������
		//�����±�Ϊ0��λ�ã�Ȼ���һ��Ԫ�غ����һ��Ԫ�ؽ���������������
		HeapAdJust(array, size - i - 1, 0);
	}

}

void BubbleSort(int* array, int size)
{
	int i = 0, j = 0;
	int flag = 1;
	assert(array);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			flag = 1;
			if (array[j] > array[j + 1])
			{
				Swap(&array[j], &array[j + 1]);
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}

int FindRightData(int* array, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (array[left] < array[right - 1])
	{
		if (array[mid] < array[left])
			return left;
		else if (array[right- 1] < array[mid])
			return right - 1;
		else
			return mid;
	}
	else
	{
		if (array[mid] > array[left])
			return left;
		else if (array[right - 1] < array[mid])
			return right - 1;
		else
			return mid;
	}
}

int DealArray01(int* array, int left, int right)//��������Сֵ����
{
	int begin = left; 
	int end = right - 1;
	int key = array[right - 1];
	while (begin < end)
	{
		while (begin < end && array[begin] <= key)
			begin++;
		
		while (end > begin && array[end] >= key)
			end--;

		if (begin != end)
			Swap(&array[begin], &array[end]);
	}

	if (begin != right)
		Swap(&array[begin], &array[right - 1]);

	return begin;
}

int DealArray02(int* array, int left, int right)//�ڿ����
{
	int begin = left;
	int end = right - 1;
	int key = array[right - 1];
	while (begin < end)
	{
		while (begin < end && array[begin] <= key)
			begin++;

		array[end] = array[begin];

		while (end > begin && array[end] >= key)
			end--;

		if (begin != end)
			array[begin] = array[end];
			begin++;
	}
	array[end] = key;

	return end;
}

int DealArray03(int* array, int left, int right)
{
	int pCur = left;
	int pre = pCur - 1;
	int index = FindRightData(array, left, right);
	if (index != right - 1)
		Swap(&array[index], &array[right - 1]); 
	int key = array[right - 1];
	while (pCur < right)
	{
		if (array[pCur] < key && ++pre != pCur)
			Swap(&array[pCur], &array[pre]);
		pCur++;
	}
	if (++pre != right - 1)
		Swap(&array[pre], &array[pCur - 1]);
	return pre;
}

void QuickSort(int* array, int left, int right)
{
	/*int bagin = left;
	int end = right;*/
	if (right - left > 1)
	{
		//int ret = DealArray01(array, left, right);//�ұȻ�׼ֵ��ĺ�С�Ľ���
		//int ret = DealArray02(array, left, right);//�ڿӣ���ӣ����ڿӣ������
		int ret = DealArray03(array, left, right);
		QuickSort(array, left, ret);
		QuickSort(array, ret + 1, right);
	}
}

void MergeData(int* array, int left, int mid, int right, int* temp)//�鲢���򣬰��������ݹ鲢����
{
	int index = left;
	int begin1 = left, end1 = mid;
	int begin2 = mid, end2 = right;

	while (begin1 < end1 && begin2 < end2)
	{
		if (array[begin1] <= array[begin2])
		{
			temp[index++] = array[begin1++];
		}
		else
		{
			temp[index++] = array[begin2++];
		}
	}

	while (begin1 < end1)
		temp[index++] = array[begin1++];

	while (begin2 < end2)
		temp[index++] = array[begin2++];

}

void _MergeSort(int* array, int left, int right, int* temp)//�鲢�����������л���
{
	if (right - left > 1)
	{
		int mid = left + (right - left) / 2;
		_MergeSort(array, left, mid, temp);
		_MergeSort(array, mid, right, temp);
		MergeData(array, left, mid, right, temp);
		memcpy(array + left, temp + left, (right - left) * sizeof(int));
	}
}

void MergeSortNor(int* array, int size, int* temp)//�鲢����ǵݹ�
{
	int left, mid, right;
	int gap = 1;
	int i = 0;
	
	while (gap < size)
	{
		for (i = 0; i < size; i += 2 * gap)
		{
			//������������
			left = i;
			mid = left + gap;
			right = mid + gap;

			//�ж��ұ�����ĺϷ���
			if (mid > size)
				mid = size;

			if (right > size)
				right = size;

			//�鲢����
			MergeData(array, left, mid, right, temp);
		}
		//�����ռ�
		memcpy(array, temp, size * sizeof(array[0]));
		gap *= 2;
	}

	free(temp);
}

void MergeSort(int* array, int size)
{
	assert(array);

	int* temp = (int*)malloc(size*sizeof(int));
	if (temp == NULL)
	{
		assert(0);
		return;
	}
	//_MergeSort(array, 0, size, temp);//�鲢��������ݽ��л���
	MergeSortNor(array, size, temp);//�鲢����ǵݹ�
}