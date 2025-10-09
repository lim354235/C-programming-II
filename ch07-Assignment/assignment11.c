/*
학번:202511231
이름:임재연
프로그램: Assignment11 - 각 학생의 한 학기 성적은 중간고사 30점, 기말고사 30점, 팀프로젝트 30점, 출석 10점으로 계산된다. 학생별 총점을 구하고
						 중간고사, 기말고사, 팀프로젝트, 출석의 평균점을 구해서 출력하는 프로그램을 작성하시오.
날짜: 2025.10.08
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
		printf("학 생	%d번:	%.0f	%.0f	%.0f	%.0f ==> %d", i + 1, arr[i].mid, arr[i].fin, arr[i].team, arr[i].att, totalG);
		printf("\n");
	}
}

double calAver(STUDENT arr[])
{
	double midA = (arr[0].mid + arr[1].mid + arr[2].mid + arr[3].mid + arr[4].mid) / 5;
	double finA = (arr[0].fin + arr[1].fin + arr[2].fin + arr[3].fin + arr[4].fin) / 5;
	double teamA = (arr[0].team + arr[1].team + arr[2].team + arr[3].team + arr[4].team) / 5;
	double attA = (arr[0].att + arr[1].att + arr[2].att + arr[3].att + arr[4].att) / 5;

	printf("항목별 평균:	%.2f	%.2f	%.2f	%.2f", midA, finA, teamA, attA);
}