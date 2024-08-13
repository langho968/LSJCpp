#include <iostream>

using namespace std;

void main()
{
	int mid;
	int final;
	int attend;
	int task;

	int sum;
	string score;

	printf("중간평가 점수를 입력해주세요.(30점 만점)");
	scanf_s("%d", &mid);

	printf("기말평가 점수를 입력해주세요.(30점 만점)");
	scanf_s("%d", &final);

	printf("출석점수를 입력해주세요.(20점 만점)");
	scanf_s("%d", &attend);

	printf("과제 점수를 입력해주세요.(20점 만점)");
	scanf_s("%d", &task);

	sum = mid + final + attend + task;


	if (0 < sum && sum<= 60)
	{
		score = "F";
	}
	else if (60 < sum && sum <= 70)
	{
		score = "D";
	}
	else if (70 < sum && sum <= 80)
	{
		score = "C";
	}
	else if (80 < sum && sum <= 90)
	{
		score = "B";
	}
	else if (90 < sum )
	{
		score = "A";
	}
	printf("%s입니다.", score.c_str());
}