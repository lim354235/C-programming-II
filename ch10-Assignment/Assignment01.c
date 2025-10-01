/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: Assignment01 - 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
* 날짜: 2025.10.01
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