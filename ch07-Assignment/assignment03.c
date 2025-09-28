/*
학번:202511231
이름:임재연
프로그램: Assignment03 - 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값과 최솟값을 찾아서 출력하는 프로그램을 작성하시오.
날짜: 2025.09.27
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

	printf("배열: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
}