/*
학번:202511231
이름:임재연
프로그램: 예제 7-1
날짜: 2025.09.30
*/

#include <stdio.h>

int main()
{
	int arr[5];	// 크기가 5인 배열 선언
	int byte_size = 0;	// 배열의 바이트 크기를 저장할 변수
	int size = 0;	// 배열의 크기를 저장할 변수
	int i;

	byte_size = sizeof(arr);	// 배열의 바이트 크기
	printf("배열의 바이트 크기: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);	// 배열의 크기(원소의 개수)
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return 0;
}