/*
학번:202511231
이름:임재연
프로그램: 예제 7-6
날짜: 2025.09.30
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);	// 할당되지 않은 메모리를 읽어온다.
	//arr[5] = 100;	// 할당되지 않은 메모리를 변경한다. (실행에러)

	return 0;
}