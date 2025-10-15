/*
* 학번: 202511231
* 이름: 임재연
* 프로그램: 예제 11 - 3
* 날짜: 2025.10.15
*/

#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

void accumulator(char op, int operand);

int main()
{
	while (1)
	{
		char op;
		int num;
		printf("연산자와 정수를 입력하세요.(. 0 입력시 종료): ");
		scanf("%c %d", &op, &num);
		if (op == '.' && num == 0)
			break;
		accumulator(op, num);
	}

	return 0;
}

void accumulator(char op, int operand)
{
	static int result = 0;
	switch (op)
	{
	case '+':
		result += operand;
		break;
	case '-':
		result -= operand;
		break;
	case '*':
		result *= operand;
		break;
	case '/':
		result /= operand;
	default:
		return;
	}
	printf("%c %d = %d\n", op, operand, result);
}