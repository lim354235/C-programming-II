/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment03 - Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ񰪰� �ּڰ��� ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��¥: 2025.09.27
*/

#include <stdio.h>


int arrayMaxMin(int arr[], int size, int* max, int* min);
void PrintMaxMin();

int main()
{
	PrintMaxMin();
	return 0;
}

int arrayMaxMin(int arr[], int size, int* max, int* min)
{
	*max = arr[0];
	*min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (*max < arr[i])
			*max = arr[i];
		if (*min > arr[i])
			*min = arr[i];
	}
	return 0;
}

void PrintMaxMin()
{
	int arr[] = { 23, 11, 45, 67, 32, 89, 5, 90, 12, 38 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = 0;
	int min = 0;
	arrayMaxMin(arr, size, &max, &min);

	printf("�迭: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
}