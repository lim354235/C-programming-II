/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment18 - �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ������ �����Ͻÿ�.
						 ������ �Է¹޾� ������ ���ҷ� �߰��ϰ� �� ������ ������ ���ҵ��� ����Ͻÿ�.
��¥: 2025.10.08
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


int intputSet();

int main()
{
    inputSet();
	return 0;
}


int inputSet()
{
    int arr[SIZE];
    int count = 0;
    int num;
    int duplicate;

    while (count < SIZE)
    {
        printf("�迭�� �߰��� ����? ");
        scanf("%d", &num);

        duplicate = 0;
        for (int i = 0; i < count; i++)
        {
            if (arr[i] == num)
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
        {
            printf("�ش� ���Ұ� �̹� �����մϴ�.\n");
            continue;
        }

        // �迭�� ����
        arr[count] = num;
        count++;

        // ���� ����� ���� ���
        for (int i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
