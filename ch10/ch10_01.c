/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�: ���� 10 - 1
* ��¥: 2025.10.01
*/

#include <stdio.h>

//����ü�� �Լ� �ۿ� �����ϸ�, �ҽ� ������ ���� �κп� ���ش�.
struct contact
{
	char name[20];	// �̸�
	char phone[20]; // ��ȭ��ȣ (01012345678 ������ ���ڿ��� ����)
	int ringtone;	// �� �Ҹ�(0~9 ����)
};

int main()
{
	printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));
	//printf("contact ����ü�� ũ�� = %d\n", sizeof(contact));	//������ ����

	return 0;
}

void test()
{
	struct contact c1;	//���� �Լ����� ����ü�� ����� �� �ִ�.
}