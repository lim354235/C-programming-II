/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�:Assignment01 - �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' ','\n','\t','\f','\r','\v')�� ������ ���� ���α׷��� �ۼ��Ͻÿ�.
* ��¥: 2025 09 24
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

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	CountSpace(str, &spaceCount);
	printf("���� ������ ����: %d\n", spaceCount);
}