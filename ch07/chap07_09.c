/*
�й�:202511231
�̸�:���翬
���α׷�: ���� 7-9
��¥: 2025.09.30
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int data[] = { 78,34,52,15,63,15,25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf("%d", key);
	for (i = 0;i < size;i++)
		if (data[i] == key)	//�迭�� ���ҿ� ��
			printf("ã�� ������ �ε���: %d\n", i);

	return 0;
}