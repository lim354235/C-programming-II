/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�: ���� 10 - 4
* ��¥: 2025.10.01
*/

#include <stdio.h>
#include <string.h>

struct contact	
{
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct1 = { "������", "0101234568", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0 && ct1.ringtone == ct2.ringtone)
		printf("ct1�� ct2�� ���� �����ϴ�.\n");
	else
		printf("ct1�� ct2�� ���� ���� �ʽ��ϴ�.\n");
	return 0;
}