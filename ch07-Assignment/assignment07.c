/*
학번:202511231
이름:임재연
프로그램: Assignment07 - 정수형 배열의 모든 원소를 특정 값으로 채우는 fill_array 함수를 작성하시오.
날짜: 2025.09.27
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

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);

	fill_array(arr, size, value);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}