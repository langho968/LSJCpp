#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;
//숙제3.
// 학생부 시스템
//1) 영어, 수학, 국어 성적 입력하게 끔해주고
//2) 입력을 모두했으면, 학생의 평균점수를 확인해주는 프로그램
// Gotoxy 써서 이쁘게하면 좋습니다.


struct Score
{
	float english;
	float math;
	float language;
	float averageScore;

	void PrintInfo()
	{
		cout << "영어 : " << this->english << endl;
		cout << "수학 : " << this->math << endl;
		cout << "국어 : " << this->language << endl;
	}

	void PrintAverage()
	{
		cout.precision(3);
		cout << "평균 점수 : " << this->averageScore << endl;
	}
};

void GotoXY(int x, int y);
void SetMainPage();
void InputScore(Score& score);
void GetAverageScore(Score& score);
void ShowAverageScore(Score score);

void main()
{
	Score score = {};
	score.english = 0;
	score.math = 0;
	score.language = 0;
	score.averageScore = 0;

	SetMainPage();

	InputScore(score);

	GetAverageScore(score);

	ShowAverageScore(score);

}
void SetMainPage()
{
	GotoXY(0, 0); cout << "┌──────────────────────────────────────────────┐";
	GotoXY(0, 1); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 2); cout << "│ㅤㅤㅤ              ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 3); cout << "│ㅤㅤㅤ              ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 4); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 5); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 6); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 7); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 8); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 9); cout << "└──────────────────────────────────────────────┘";

	GotoXY(20, 1); cout << "성적표";
	GotoXY(15, 2); cout << "성적을 입력해주세요." << endl;
}

void InputScore(Score& score)
{


	GotoXY(3, 3);
	cout << "영어 : ";
	cin >> score.english;
	cout << endl;

	GotoXY(3, 4);
	cout << "수학 : ";
	cin >> score.math;
	cout << endl;

	GotoXY(3, 5);
	cout << "국어 : ";
	cin >> score.language;
	cout << endl;

}

void GetAverageScore(Score& score)
{
	score.averageScore = (score.english + score.math + score.language) / 3;

}

void ShowAverageScore(Score score)
{
	GotoXY(0, 0); cout << "┌──────────────────────────────────────────────┐";
	GotoXY(0, 1); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 2); cout << "│ㅤㅤㅤ              ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 3); cout << "│ㅤㅤㅤ              ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 4); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 5); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 6); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 7); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 8); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 9); cout << "└──────────────────────────────────────────────┘";

	GotoXY(20, 1); cout << "성적표";

	GotoXY(3, 3);
	cout << "영어 : "<< score.english;

	GotoXY(3, 4);
	cout << "수학 : " << score.math;

	GotoXY(3, 5);
	cout << "국어 : " << score.language;

	GotoXY(3, 7);
	cout.precision(3);
	cout << "평균 점수 : " << score.averageScore;
}

void GotoXY(int x, int y)
{
	COORD pos = { x, y };
	::SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}