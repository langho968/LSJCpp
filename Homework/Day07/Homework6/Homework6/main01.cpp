#include <iostream>

#define USED_CARD -1

using namespace std;

enum class ECardReuslt
{
	HIGH,
	LOW,
	SEVEN
};

int cards[52] = {};
int playerMoney = 10000;
int betMoney;
int card;
int cardImg;
int cardNum;
int playerChoice;
int result;


void BetTime();
void MixCards();
void ShowCard();
void CheckResult();
void CheckMoneyCard();

void main()
{
	srand(time(NULL));

	MixCards();
	cout << "하이로우세븐 게임 시작" << endl;
	cout << "시작 금액 10000원" << endl;


	while (true)
	{
		BetTime();

		ShowCard();

		CheckResult();

		CheckMoneyCard();
	}



}

//배팅
void BetTime()
{
	bool enoughMoney = false;
	cout << "배팅  : 하이(0), 로우(1), 세븐(2)" << endl;
	cin >> playerChoice;
	cout << "배팅할 금액 : ";
	cin >> betMoney;

	while (enoughMoney == false)
	{
		if (betMoney > playerMoney)
		{
			cout << "배팅할 금액이 부족합니다. 다시 입력해주세요" << endl;
			cin >> betMoney;

		}
		else
		{
			enoughMoney = true;
		}
	}
}
//카드섞기
void MixCards()
{
	//카드 초기화
	for (int i = 0; i < 52; i++)
	{
		cards[i] = i + 1;
	}

	//카드 섞기
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = cards[index1];
		cards[index1] = cards[index2];
		cards[index2] = temp;
	}


}
//카드 뽑기 및 보여주기
void ShowCard()
{


	bool isUsedCard = true;
	while (isUsedCard == true)
	{
		int num = rand() % 52 + 1;

		for (int i = 0; i < 52; i++)
		{
			if (num == cards[i])
			{
				card = num;
				cards[i] = USED_CARD;
				isUsedCard = false;
			}
			else
			{
				continue;
			}
		}
	}

	//무슨카드인지 출력
	cardImg = card / 13;
	cardNum = card % 13;

	//카드 모양 출력
	switch (cardImg)
	{
	case 0:
		cout << "♤";
		break;
	case 1:
		cout << "♧";
		break;
	case 2:
		cout << "◇";
		break;
	case 3:
		cout << "♡";
		break;
	}
	//카드 숫자 출력
	switch (cardNum)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 0:
		cout << "K";
		break;
	default:
		cout << cardNum << endl;
	}
	cout << "뽑힌 카드 : ";
}
//결과 확인 및 배팅 금액 정산
void CheckResult()
{
	//결과 확인
	if (cardNum > 7)
	{
		result = (int)ECardReuslt::HIGH;
	}
	else if (cardNum == 7)
	{
		result = (int)ECardReuslt::SEVEN;
	}
	else
	{
		result = (int)ECardReuslt::LOW;
	}

	//배팅 금액 정산
	if (result == playerChoice)
	{
		if (result == (int)ECardReuslt::SEVEN)
		{
			playerMoney = playerMoney + betMoney * 10;
		}
		else
		{
			playerMoney = playerMoney + betMoney * 2;
		}
		cout << "남은 돈 : " << playerMoney;
		cout << endl;
	}
	else
	{
		playerMoney = playerMoney - betMoney;
		cout << "남은 돈 : " << playerMoney;
		cout << endl;
	}
}
//남은 금액 및 카드 확인
void CheckMoneyCard()
{
	//남은 금액 확인
	if (playerMoney <= 0)
	{
		cout << "보유한 돈을 전부 소모하여 파산하였습니다." << endl;
		cout << "게임 종료";
		exit(0);
	}

	int usedCardCount = 0;
	//남은 카드 확인
	for (int i = 0; i < 52; i++)
	{
		if (cards[i] == USED_CARD)
		{
			usedCardCount++;
		}
	}
	if (usedCardCount == 52)
	{
		cout << "카드를 전부 소진하였습니다." << endl;
		cout << "게임 종료";
		exit(0);
	}
}