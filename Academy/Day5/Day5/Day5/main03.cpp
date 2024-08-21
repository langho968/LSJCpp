#include <iostream>

using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper
};

void main()
{
	int hand[2] = {};
	int comHand[2] = {};

	cout << "가위(0), 바위(1), 보(2) 중에 낼 것을 두개 골라주세요" << endl;

	for (int i = 0; i < 2; i++)
	{
		cin >> hand[i];
	}

	srand(time(NULL));

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	cout << "내가 낸것 : ";
	for (int i = 0; i < 2; i++)
	{
		if (hand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위";
		}
		else if (hand[i] == (int)ERockScissorPaper::Paper)
		{
			cout << "보";
		}
		else
		{
			cout << "가위";
		}
	}

	cout << endl;
	cout << "컴퓨터가 낸것 : ";
	for (int i = 0; i < 2; i++)
	{
		if (comHand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위";
		}
		else if (comHand[i] == (int)ERockScissorPaper::Paper)
		{
			cout << "보";
		}
		else
		{
			cout << "가위";
		}
		cout << endl;

		cout << "왼손(0)과 오른손(1) 중에 골라주세요." << endl;
		int handChoice;
		cin >> handChoice;

		int finalHand[2] = {};
		finalHand[0] = hand[handChoice];
		finalHand[1] = comHand[rand() % 2];

		cout << "최종적으로 낸것" << endl;
		for (int i = 0; i < 2; i++)
		{
			if (i == 0)
			{
				cout << "플레이어 : ";
			}
			else if (i == 1)
			{
				cout << "컴퓨터 : ";
			}

			if (finalHand[i] == (int)ERockScissorPaper::Rock)
			{
				cout << "바위" << endl;
			}
			else if (finalHand[i] == (int)ERockScissorPaper::Scissor)
			{
				cout << "가위" << endl;
			}
			else
			{
				cout << "보" << endl;
			}
		}

		if (finalHand[0] == finalHand[1])
		{
			cout << "비겼습니다." << endl;
		}
		else if (finalHand[0] == (int)ERockScissorPaper::Scissor &&
			finalHand[1] == (int)ERockScissorPaper::Rock)
		{
			cout << "패배했습니다." << endl;
		}
		else if (finalHand[0] == (int)ERockScissorPaper::Rock &&
			finalHand[1] == (int)ERockScissorPaper::Paper)
		{
			cout << "패배했습니다." << endl;
		}
		else if (finalHand[0] == (int)ERockScissorPaper::Paper &&
			finalHand[1] == (int)ERockScissorPaper::Scissor)
		{
			cout << "패배했습니다." << endl;
		}
		else
		{
			cout << "승리했습니다." << endl;
		}
	}
}