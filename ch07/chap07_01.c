/*
�й�:202511231
�̸�:���翬
���α׷�: ���� 7-1
��¥: 2025.09.30
*/

#include <stdio.h>

int main()
{
	int arr[5];	// ũ�Ⱑ 5�� �迭 ����
	int byte_size = 0;	// �迭�� ����Ʈ ũ�⸦ ������ ����
	int size = 0;	// �迭�� ũ�⸦ ������ ����
	int i;

	byte_size = sizeof(arr);	// �迭�� ����Ʈ ũ��
	printf("�迭�� ����Ʈ ũ��: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);	// �迭�� ũ��(������ ����)
	printf("�迭�� ũ��: %d\n", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return 0;
}