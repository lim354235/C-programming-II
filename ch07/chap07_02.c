/*
학번:202511231
이름:임재연
프로그램: 예제 7-2
날짜: 2025.09.30
*/

#include <stdio.h>

#define ARR_SIZE 5	// 배열의 크기로 사용할 매크로 상수의 정의

int main()
{
	int arr[ARR_SIZE];	// 배열의 크기를 매크로 상수로 지정할 수 있다.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE 이용
		arr[i] = 0;

	printf("arr= ");
	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE 이용
		printf("%d", arr[i]);
	printf("\n");

	return 0;
}