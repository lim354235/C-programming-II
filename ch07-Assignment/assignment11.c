/*
�й�:202511231
�̸�:���翬
���α׷�: Assignment11 - �� �л��� �� �б� ������ �߰���� 30��, �⸻��� 30��, ��������Ʈ 30��, �⼮ 10������ ���ȴ�. �л��� ������ ���ϰ�
						 �߰����, �⸻���, ��������Ʈ, �⼮�� ������� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��¥: 2025.10.08
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student
{
	double mid;
	double fin;
	double team;
	double att;
}STUDENT;

void studentsGrade();
int printGrade(STUDENT arr[]);
double calAver(STUDENT arr[]);


int main()
{
	studentsGrade();
	return 0;
}

void studentsGrade()
{
	STUDENT arr[] =
	{
		{ 28,28,26,9 },
		{ 30,27,30,10 },
		{ 25,26,24,8 },
		{ 18,22,22,5 },
		{ 24,25,30,10 },
	};

	printGrade(arr);
	calAver(arr);
}

int printGrade(STUDENT arr[])
{
	for (int i = 0; i < 5; i++)
	{
		int totalG = arr[i].mid + arr[i].fin + arr[i].team + arr[i].att;
		printf("�� ��	%d��:	%.0f	%.0f	%.0f	%.0f ==> %d", i + 1, arr[i].mid, arr[i].fin, arr[i].team, arr[i].att, totalG);
		printf("\n");
	}
}

double calAver(STUDENT arr[])
{
	double midA = (arr[0].mid + arr[1].mid + arr[2].mid + arr[3].mid + arr[4].mid) / 5;
	double finA = (arr[0].fin + arr[1].fin + arr[2].fin + arr[3].fin + arr[4].fin) / 5;
	double teamA = (arr[0].team + arr[1].team + arr[2].team + arr[3].team + arr[4].team) / 5;
	double attA = (arr[0].att + arr[1].att + arr[2].att + arr[3].att + arr[4].att) / 5;

	printf("�׸� ���:	%.2f	%.2f	%.2f	%.2f", midA, finA, teamA, attA);
}