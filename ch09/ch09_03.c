/*
* 학번: 202511231
* 이름: 임재연
* 프로그램:Assignment03 - 입력받은 문자열의 소문자는 대문자로 , 대문자는 소문자로 변환하는 프로그램을 작성하시오.
* 날짜: 2025 09 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{

	return 0;
}

void changeCase(char* a)
{
	while (*a)
	{
		if (*a == "a")
		{

		}
		a++;
	}
}

void printLetter()
{
	char str[100] = 0;

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	changeCase(str);
	printf("변환 후: %s\n", str);
}