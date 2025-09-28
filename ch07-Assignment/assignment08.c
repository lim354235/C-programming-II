/*
학번:202511231
이름:임재연
프로그램: Assignment08 - 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
날짜: 2025.09.27
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int inputDiscount();
int CalDiscount(int arr[], int dis[], int size, int discount);

int main()
{
	inputDiscount();
	return 0;
}

int inputDiscount()
{
	int goods[5] = { 0 };
	int size = 5;
	int discount = 0;
	int dis[5] = { 0 };

	printf("상품 가격 5개를 입력하시오: \n");
	scanf("%d %d %d %d %d", &goods[0], &goods[1], &goods[2], &goods[3], &goods[4]);

	printf("할인율(%%)? ");
	scanf("%d", &discount);

	CalDiscount(goods, dis, size, discount);

	for (int i = 0; i < size; i++)
	{
		printf("가격:	%d --> 할인가:	%d\n", goods[i], dis[i]);
	}

	return 0;
}

int CalDiscount(int arr[],int dis[], int size, int discount)
{
	for(int i = 0; i < size; i++)
	{
		dis[i] = arr[i] - (arr[i] * discount / 100);
	}

}