#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ch11_01.h"

//extern get_id();
//extern last_id;


int main(int arge, char* argv[])
{
	printf("�߼� �� ���¾��?\n");

	printf("ȸ��1�� id = %d\n", get_id());	// 1001
	printf("ȸ��2�� id = %d\n", get_id());	// 1002
	printf("ȸ��3�� id = %d\n", get_id());	// 1003

	//printf("last_id = %d\n", last_id);

	return 0;
}