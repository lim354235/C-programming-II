/*
학번:202511231
이름:임재연
프로그램: Assignment01 - 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우고 출력하는 프로그램을 작성하시오.
날짜: 2025.09.27
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

	printf("첫 번째 항? ");
	scanf("%d", &first);

	printf("공차? ");
	scanf("%d", &diff);

	CommonDiffernce(arr, size, diff, first);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}