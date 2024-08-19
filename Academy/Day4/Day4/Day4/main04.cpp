#include <iostream>

using namespace std;

//2. 가위바위보 게임 만들기

//enum (옛날 문법, c문법)
enum eRockScissorPaper
{
	RSP_SCISSOR= 0,
	RSP_ROCK,
	RSP_PAPER,
	RSP_END
};


//C++의 enum
enum class RockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};
//변수선언
//[자료형] 변수형 = 값;

//자료형 : int, float, char, bool
//사용자 정의 자료형 : enum


void main()
{
	srand(time(NULL));
	printf("가위(0), 바위(1), 보(2) 중에서 선택해주세요\n");
	int playerHand = 0;
	int comHand = 0;

	//상수로 써주는 값은 모두 대문자로 쓰기(혹은 파스칼)
	int ROCK = 1;
	int SCISSOR = 0;
	int PAPER = 2;
	int ROCKSCISSORPAPER_END;
	scanf_s("%d", &playerHand);
	comHand = rand() % (int)RockScissorPaper::End;

	//플레이어 출력
	if (playerHand == (int)RockScissorPaper::Scissor)
	{
		printf("플레이어는 가위를 선택하였습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Rock)
	{
		printf("플레이어는 바위를 선택하였습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Paper)
	{
		printf("플레이어는 보를 선택하였습니다.\n");
	}

	//컴퓨터 출력
	if (comHand == (int)RockScissorPaper::Scissor)
	{
		printf("컴퓨터는 가위를 선택하였습니다.\n");
	}
	else if (comHand == (int)RockScissorPaper::Rock)
	{
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	}
	else if (comHand == (int)RockScissorPaper::Paper)
	{
		printf("컴퓨터는 보를 선택하였습니다.\n");
	}

	if (playerHand == comHand)
	{
		printf("비겼습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Scissor && comHand == (int)RockScissorPaper::Rock)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Rock && comHand == (int)RockScissorPaper::Paper)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Paper && comHand == (int)RockScissorPaper::Scissor)
	{
		printf("졌습니다.\n");
	}
	else
	{
		printf("이겼습니다.\n");
	}

	//0,1,2, 코드 중간에 나오는 일반적인 숫자
	//매직넘버라고 부르는 되게 안좋은 습관

	//매직넘버 << 작성자말고는 그 누구도 알아볼 수 없는 위험한 숫자
	//변수명이나, 다른 Enum으로 대체해줘야합니다.
}