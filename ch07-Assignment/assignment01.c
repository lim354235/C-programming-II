/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment01 - ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��¥: 2025.09.27
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int CommonDiffernce(int arr[], int size, int commonDiff, int first);
void PrintArray();

int main()
{
	PrintArray();
	return 0;
}

int CommonDiffernce(int arr[10], int size, int commonDiff, int first)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = first + (commonDiff * i);
	}
	return 0;
}

void PrintArray()
{
	int arr[10];
	int size = 10;
	int first = 0;
	int diff = 0;

	printf("ù ��° ��? ");
	scanf("%d", &first);

	printf("����? ");
	scanf("%d", &diff);

	CommonDiffernce(arr, size, diff, first);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}