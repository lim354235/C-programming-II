/*
* �й�: 202511231	
* �̸�: ���翬
* ���α׷�: �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����('', '\n','\t','\f','\r','\v')�� ������ ���� ���α׷��� �ۼ��Ͻÿ�.
* ��¥: 2025 09 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void CountSpace(const char* a, int* count);

int main()
{

	return 0;
}

void CountSpace(const char* a, int* count)
{
	*count = 0; 
	while (*a) 
	{
		
		if (*a == ' ' || *a == '\n' || *a == '\t' || *a == '\f' || *a == '\r' || *a == '\v')
		{
			(*count)++; 
		}
		a++;
	}
}

