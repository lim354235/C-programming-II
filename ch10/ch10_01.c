/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: 예제 10 - 1
* 날짜: 2025.10.01
*/

#include <stdio.h>

//구조체는 함수 밖에 정의하며, 소스 파일의 시작 부분에 써준다.
struct contact
{
	char name[20];	// 이름
	char phone[20]; // 전화번호 (01012345678 형식의 문자열로 저장)
	int ringtone;	// 벨 소리(0~9 선택)
};

int main()
{
	printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));
	//printf("contact 구조체의 크기 = %d\n", sizeof(contact));	//컴파일 에러

	return 0;
}

void test()
{
	struct contact c1;	//여러 함수에서 구조체를 사용할 수 있다.
}