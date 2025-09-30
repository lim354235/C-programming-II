/*
학번:202511231
이름:임재연
프로그램: 예제 7-3
날짜: 2025.09.30
*/

#include <stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };	// 배열의 크기만ㅋ큼 초기값을 지정한다.
	int i;

	printf("arr= ");
	for (i = 0; i < 5; i++)
		printf("%d", arr[i]);
	printf("\n");

	return 0;
}