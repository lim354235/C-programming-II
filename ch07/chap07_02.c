/*
�й�:202511231
�̸�:���翬
���α׷�: ���� 7-2
��¥: 2025.09.30
*/

#include <stdio.h>

#define ARR_SIZE 5	// �迭�� ũ��� ����� ��ũ�� ����� ����

int main()
{
	int arr[ARR_SIZE];	// �迭�� ũ�⸦ ��ũ�� ����� ������ �� �ִ�.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE �̿�
		arr[i] = 0;

	printf("arr= ");
	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE �̿�
		printf("%d", arr[i]);
	printf("\n");

	return 0;
}