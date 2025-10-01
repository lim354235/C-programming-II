/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: 예제 10 - 5
* 날짜: 2025.10.01
*/

#include <stdio.h>
#include <string.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
}CONTACT;

int main()
{
	CONTACT arr[] = {	// 초기화하는 경우에는 배열의 크기를 생략할 수 있다.
		{"김석진", "01011112222", 0},
		{"전정국", "01012345678", 1},
		{"박지민", "01077778888", 2}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("이름   전화번호    벨\n");
	for (i = 0; i < size; i++)
	{
		printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}

	return 0;
}