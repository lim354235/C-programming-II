/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�:Assignment03 - �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ� , �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
* ��¥: 2025 09 24
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

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	changeCase(str);
	printf("��ȯ ��: %s\n", str);
}