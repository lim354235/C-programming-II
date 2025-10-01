/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: 예제 10 - 4
* 날짜: 2025.10.01
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
	struct contact ct1 = { "전정국", "0101234568", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0 && ct1.ringtone == ct2.ringtone)
		printf("ct1과 ct2의 값이 같습니다.\n");
	else
		printf("ct1과 ct2의 값이 같지 않습니다.\n");
	return 0;
}