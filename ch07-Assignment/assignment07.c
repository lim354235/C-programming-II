/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment07 - ������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�.
��¥: 2025.09.27
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void fill_array(int arr[], int size, int value);
int PrintArray();

int main()
{
	PrintArray();
	return 0;
}

void fill_array(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = value;
	}
}

int PrintArray()
{
	int arr[20] = {0};
	int size = 20;
	int value = 0;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &value);

	fill_array(arr, size, value);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}