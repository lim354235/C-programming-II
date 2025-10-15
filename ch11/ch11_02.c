/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: 예제 11 - 2
* 날짜: 2025.10.15
*/

#include <stdio.h>

void test_static()
{
	int local = 0;
	static int s_local = 0;

	printf("local = %d, ", local++);
	printf("s_local = %d\n", s_local++);
}

int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
		test_static();

	return 0;
}