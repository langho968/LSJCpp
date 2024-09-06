#include <iostream>

using namespace std;

void InitDeck(int card[]);
void PrintCard(int card);
void ShuffleCard(int card[]);

void main()
{
	int card[52] = {};

	InitDeck(card);
	
	ShuffleCard(card);

#ifdef  DEV_LOG

	for (int i = 0; i < 52; i++)
	{
		PrintCard(card[i]);
	}

#endif //  DEV_LOG

	int playerGold = 10000;
	cout << "플레이어가 입장하였습니다." << endl;

	bool isGamePlaying = true;
	int openCardIndex;
	while (isGamePlaying)
	{
		cout << "플레이어의 현재 골드 : " << playerGold << endl;
		cout << "배팅을 진행해주세요." << endl;
		cout << "하이(0), 로우(1), 세븐(2) 중에 선택해주세요." << endl;

		int choice;
		cin >> choice;

		cout << "배팅 금액을 정해주세요." << endl;
		int betMoney;
		cin >> betMoney;
		while (playerGold < betMoney)
		{
			cout << "너무 많이 배팅하였습니다. 다시 배팅해주세요." << endl;
			cin >> betMoney;
		}

		playerGold -= betMoney;

		cout << "다음카드 : " << endl;
		PrintCard(card[openCardIndex]);
		
		int number = card[openCardIndex] % 13 + 1;
		if (choice == 0)
		{
			if (7 < number)
			{
				cout << "축하합니다. 당첨금을 획득하였습니다." << endl;
				cout << "획득 골드 : " << betMoney * 2;
				playerGold += betMoney * 2;
			}
		}
		else if (choice == 1)
		{
			if (7 > number)
			{
				cout << "축하합니다. 당첨금을 획득하였습니다." << endl;
				cout << "획득 골드 : " << betMoney * 2;
				playerGold += betMoney * 2;
			}
		}
		else if (choice == 2)
		{
			if (number==7)
			{
				cout << "축하합니다. 당첨금을 획득하였습니다." << endl;
				cout << "획득 골드 : " << betMoney * 10;
				playerGold += betMoney * 10;
			}
		}

		openCardIndex++;
	}
}
void InitDeck(int card[])
{

	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
}

void PrintCard(int card)
{

	switch (card / 13)
	{
	case 0:
		cout << "♤";
		break;
	case 1:
		cout << "◇";
		break;
	case 2:
		cout << "♡";
		break;
	case 3:
		cout << "♧";
		break;
	}
	switch (card % 13 + 1)
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
	case 13:
		cout << "K";
		break;
	default:
		cout << card % 13 + 1;
		break;
	}
}

void ShuffleCard(int card[])
{
	for (int i = 0; i < 52; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;
		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
		
	}
}