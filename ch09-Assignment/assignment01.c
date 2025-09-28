/*
* 학번: 202511231
* 이름: 임재연
* 프로그램:Assignment01 - 한 줄의 문자열을 입력받아서 공백 문자(' ','\n','\t','\f','\r','\v')의 개수를 세는 프로그램을 작성하시오.
* 날짜: 2025 09 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int CountSpace(const char* a, int* count);
void readString();

int main()
{
	readString();
	return 0;
}

int CountSpace(const char* a, int* count)
{
	*count = 0;
	while (*a)
	{
		if (*a == ' ' || *a == '\n' || *a == '\t' || *a == '\f' || *a == '\r' || *a == '\v')
		{
			(*count)++;
		}
		a++;
	}
	return *count;
}

void readString()
{
	char str[100];
	int spaceCount = 0;

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	CountSpace(str, &spaceCount);
	printf("공백 문자의 개수: %d\n", spaceCount);
}