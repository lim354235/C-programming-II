/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment08 - ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��¥: 2025.09.27
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

	printf("��ǰ ���� 5���� �Է��Ͻÿ�: \n");
	scanf("%d %d %d %d %d", &goods[0], &goods[1], &goods[2], &goods[3], &goods[4]);

	printf("������(%%)? ");
	scanf("%d", &discount);

	CalDiscount(goods, dis, size, discount);

	for (int i = 0; i < size; i++)
	{
		printf("����:	%d --> ���ΰ�:	%d\n", goods[i], dis[i]);
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