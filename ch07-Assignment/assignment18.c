/*
학번:202511231
이름:임재연
프로그램: Assignment18 - 최대 10개의 정수형 원소를 저장할 수 있는 집합을 구현하시오.
						 정수를 입력받아 집합의 원소로 추가하고 그 때마다 집합의 원소들을 출력하시오.
날짜: 2025.10.08
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
        printf("배열에 추가할 원소? ");
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
            printf("해당 원소가 이미 존재합니다.\n");
            continue;
        }

        // 배열에 저장
        arr[count] = num;
        count++;

        // 현재 저장된 정수 출력
        for (int i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
