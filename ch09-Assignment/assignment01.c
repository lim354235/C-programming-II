/*
* 학번: 202511231	
* 이름: 임재연
* 프로그램: 한 줄의 문자열을 입력받아서 공백 문자('', '\n','\t','\f','\r','\v')의 개수를 세는 프로그램을 작성하시오.
* 날짜: 2025 09 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void CountSpace(const char* a, int* count);

int main()
{

	return 0;
}

void CountSpace(const char* a, int* count)
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
}

