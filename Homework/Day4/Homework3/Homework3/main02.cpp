#include <iostream>

using namespace std;

enum class RockScissorPaper
{
	Scissor,
	Rock,
	Paper
};

void main()
{
	//가위바위보 하나빼기

	srand(time(NULL));
	int comLeftHand;
	int comRightHand;
	int comFinalHand;

	int playerLeftHand;
	int playerRightHand;
	int playerFinalHand;

	int comMinusHand;
	int playerMinusHand;

	int comHand[3] = {};

	printf("가위(0), 바위(1), 보(2)중에 2개를 선택해주세요.\n");
	scanf_s("%d %d", &playerLeftHand, &playerRightHand);

	for (int i = 0; i < 3; i++)
	{
		comHand[i] = i;
	}
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 3;
		int index2 = rand() % 3;

		int temp = comHand[index1];
		comHand[index1] = comHand[index2];
		comHand[index2] = temp;
	}

	comLeftHand = comHand[0];
	comRightHand = comHand[1];


	//컴퓨터 왼손 확인
	if (comLeftHand == (int)RockScissorPaper::Rock)
	{
		printf("컴퓨터 왼손 = 바위 / ");
	}
	else if (comLeftHand == (int)RockScissorPaper::Paper)
	{
		printf("컴퓨터 왼손 = 보 / ");
	}
	else
	{
		printf("컴퓨터 왼손 = 가위 / ");
	}
	//컴퓨터 오른손 확인
	if (comRightHand == (int)RockScissorPaper::Rock)
	{
		printf("컴퓨터 오른손 = 바위\n");
	}
	else if (comRightHand == (int)RockScissorPaper::Paper)
	{
		printf("컴퓨터 오른손 = 보\n");
	}
	else
	{
		printf("컴퓨터 오른손 = 가위\n");
	}
	//플레이어 왼손 확인
	if (playerLeftHand == (int)RockScissorPaper::Rock)
	{
		printf("플레이어 왼손 = 바위 / ");
	}
	else if (playerLeftHand == (int)RockScissorPaper::Paper)
	{
		printf("플레이어 왼손 = 보 / ");
	}
	else
	{
		printf("플레이어 왼손 = 가위 / ");
	}
	//플레이어 오른손 확인
	if (playerRightHand == (int)RockScissorPaper::Rock)
	{
		printf("플레이어 오른손 = 바위\n");
	}
	else if (playerRightHand == (int)RockScissorPaper::Paper)
	{
		printf("플레이어 오른손 = 보\n");
	}
	else
	{
		printf("플레이어 오른손 = 가위\n");
	}


	printf("왼손(0), 오른손(1) 중 뺄 손을 정해주세요.\n");
	scanf_s("%d", &playerMinusHand);

	//컴퓨터 뺄 손
	comMinusHand = rand() % 2;



	//컴퓨터 최종
	if (comMinusHand == 0)
	{
		comFinalHand = comRightHand;

		if (comFinalHand == (int)RockScissorPaper::Paper)
		{
			printf("컴퓨터 선택 : 보\n");
		}
		else if (comFinalHand == (int)RockScissorPaper::Rock)
		{
			printf("컴퓨터 선택 : 바위\n");
		}
		else
		{
			printf("컴퓨터 선택 : 가위\n");
		}
	}
	else
	{
		comFinalHand = comLeftHand;

		if (comFinalHand == (int)RockScissorPaper::Paper)
		{
			printf("컴퓨터 선택 : 보\n");
		}
		else if (comFinalHand == (int)RockScissorPaper::Rock)
		{
			printf("컴퓨터 선택 : 바위\n");
		}
		else
		{
			printf("컴퓨터 선택 : 가위\n");
		}
	}

	//유저 최종
	if (playerMinusHand == 0)
	{
		playerFinalHand = playerRightHand;

		if (playerFinalHand == (int)RockScissorPaper::Paper)
		{
			printf("유저 선택 : 보\n");
		}
		else if (playerFinalHand == (int)RockScissorPaper::Rock)
		{
			printf("유저 선택 : 바위\n");
		}
		else
		{
			printf("유저 선택 : 가위\n");
		}
	}
	else
	{
		playerFinalHand = playerLeftHand;

		if (playerFinalHand == (int)RockScissorPaper::Paper)
		{
			printf("유저 선택 : 보\n");
		}
		else if (playerFinalHand == (int)RockScissorPaper::Rock)
		{
			printf("유저 선택 : 바위\n");
		}
		else
		{
			printf("유저 선택 : 가위\n");
		}
	}

	//가위바위보 결과
	if (playerFinalHand == comFinalHand)
	{
		printf("무승부입니다.");
	}
	else if (playerFinalHand == (int)RockScissorPaper::Rock && comFinalHand == (int)RockScissorPaper::Scissor)
	{
		printf("승리하였습니다.");
	}
	else if(playerFinalHand == (int)RockScissorPaper::Paper && comFinalHand == (int)RockScissorPaper::Rock)
	{
		printf("승리하였습니다.");
	}
	else if (playerFinalHand == (int)RockScissorPaper::Scissor && comFinalHand == (int)RockScissorPaper::Paper)
	{
		printf("승리하였습니다.");
	}
	else if (playerFinalHand == (int)RockScissorPaper::Rock && comFinalHand == (int)RockScissorPaper::Paper)
	{
		printf("패배하였습니다.");
	}
	else if (playerFinalHand == (int)RockScissorPaper::Paper && comFinalHand == (int)RockScissorPaper::Scissor)
	{
		printf("패배하였습니다.");
	}
	else if (playerFinalHand == (int)RockScissorPaper::Scissor && comFinalHand == (int)RockScissorPaper::Rock)
	{
		printf("패배하였습니다.");
	}
}