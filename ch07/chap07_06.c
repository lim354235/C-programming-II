/*
�й�:202511231
�̸�:���翬
���α׷�: ���� 7-6
��¥: 2025.09.30
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

	printf("arr[5] = %d\n", arr[5]);	// �Ҵ���� ���� �޸𸮸� �о�´�.
	//arr[5] = 100;	// �Ҵ���� ���� �޸𸮸� �����Ѵ�. (���࿡��)

	return 0;
}