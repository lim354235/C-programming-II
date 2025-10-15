/*
* �й�: 202511231
* �̸�: ���翬
* ���α׷�: ���� 11 - 3
* ��¥: 2025.10.15
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
		printf("�����ڿ� ������ �Է��ϼ���.(. 0 �Է½� ����): ");
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