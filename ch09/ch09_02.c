/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�:Assignment02 - ���� �迭�� �Ű������� ���޹޾� ���� ����(' ','\n','\t','\f','\r','\v')�� ��� �����ϴ� �Լ��� �ۼ��Ͻÿ�.
* ��¥: 2025 09 24
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

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	removeSpaces(str);
	printf("���� ���� ���� ��: %s\n", str);
}