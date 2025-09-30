/*
학번:202511231
이름:임재연
프로그램: 예제 7-4
날짜: 2025.09.30
*/

#include <stdio.h>

int main()
{
	int amount[5] = { 1,1,5 };	// 1, 1, 5, 0, 0으로 초기화
	int price[5] = { 0 };	// 배열 전체를 0으로 초기화
	int i;

	printf("amount= ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d ", price[i]);
	printf("\n");

	return 0;
}