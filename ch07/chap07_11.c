/*
�й�:202511231
�̸�:���翬
���α׷�: ���� 7-11
��¥: 2025.0.0
*/

#include <stdio.h>

#define SIZE 5

int main()
{
	int data[SIZE] = { 7,3,9,5,1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++)	// 0~(i-1)������ ���ĵ� �����̴�.
	{
		index = i;	// ������ �迭 �� ���� ���� ������ �ε���
		for (j = i + 1; j < SIZE; j++) {
			// data[i]~data[SIZE-1]�� ���� ���� ������ �ε����� index�� ����
			if (data[index] > data[j])	// �������� ����
				index = j;
		}
		// i��° ���Ҹ� index�� �ִ� ���ҿ� �¹ٲ۴�.
		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}	// i��° ���Ұ� i��°�� ���� ���� �ȴ�.
	}
	printf("���� ��: ");
	for (i = 0;i < SIZE; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}