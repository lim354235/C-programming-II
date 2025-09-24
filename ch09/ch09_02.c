/*
* 학번: 202511231
* 이름: 임재연
* 프로그램:Assignment02 - 문자 배열을 매개변수로 전달받아 공백 문자(' ','\n','\t','\f','\r','\v')를 모두 제거하는 함수를 작성하시오.
* 날짜: 2025 09 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void removeSpaces(char* str);
void printSpace();

int main()
{
	printSpace();
	return 0;
}

void removeSpaces(char* str)
{
	char* src = str;
	char* dst = str;

	while (*src)
	{
		if (*src != ' ' && *src != '\n' && *src != '\t' && *src != '\f' && *src != '\r' && *src != '\v')
		{
			*dst++ = *src;
		}
		src++;
	}
	*dst = '\0';
}

void printSpace()
{
	char str[100];

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	removeSpaces(str);
	printf("공백 문자 제거 후: %s\n", str);
}