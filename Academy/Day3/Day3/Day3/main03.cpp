#include <iostream>

using namespace std;

void main()
{
	int middleScore = 0;
	int finalScore = 0;
	int attendanceScore = 0;
	int homeworkScore = 0;
	int totalScore = 0;

	printf("중간평가 점수를 입력해주세요.\n");
	scanf_s("%d", middleScore);

	printf("기말평가 점수를 입력해주세요.\n");
	scanf_s("%d", finalScore);

	printf("출석 점수를 입력해주세요.\n");	
	scanf_s("%d", attendanceScore);

	printf("과제 점수를 입력해주세요.\n");
	scanf_s("%d", homeworkScore);

	totalScore = middleScore + finalScore + attendanceScore + homeworkScore;

	if (totalScore <= 60)
	{
		printf("F\n");
	}
	else if (totalScore <= 70)
	{
		printf("D\n");
	}
	else if (totalScore <= 80)
	{
		printf("C\n");
	}
	else if (totalScore <= 90)
	{
		printf("B\n");
	}
	else
	{
		printf("A\n");
	}
}