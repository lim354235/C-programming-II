/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�: Assignment01 - ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
* ��¥: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void blindPW(char pw);
void log();


typedef struct login
{
	char id[20];
	char password[20];
}LOGIN;

int main()
{
	log();
	return 0;
}

void log()
{
	LOGIN id1 = { 0 };

	printf("ID? ");
	scanf("%s", id1.id);
	printf("Password? ");
	scanf("%s", id1.password);

	printf("ID: %s\n", id1.id);
	blindPW(id1.password);

}

void blindPW(char pw)
{
	for (int i = 0; i < ); i++)
	{
		printf("*");
	}
}