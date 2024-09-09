#include "MainGame01.h"
#include <iostream>
#include <Windows.h>
using namespace std;


enum ECardMatch
{
	GD38, //38광땡
	GD18, //18광땡
	GD13, //13광땡
	D10, //10땡
	D9,  //9땡
	D8, //10땡
	D7,
	D6,
	D5,
	D4,
	D3,
	D2,
	D1,
	M12,
	M14,
	M19,
	M110,
	M410,
	M46,
	G9,
	G8,
	G7,
	G6,
	G5, 
	G4, 
	G3,
	G2,
	G1,
	G0

};

void MainGame01::Init()
{
	srand(time(NULL));
	cout << "섯다를 시작하겠습니다." << endl;



	//for (int i = 3; i >= 0; i--)
	//{
	//	Sleep(1000);
	//	cout << i << "초후에 시작하겠습니다." << endl;
	//}
	//system("cls");

	


}

void MainGame01::Run()
{
	ShuffleCard();

	GiveCard();

	GetPlayerCard(_playerCard1);
	cout << endl;
	GetPlayerCard(_playerCard2);
	cout << endl;

	GetComCard(_comCard1);
	cout << endl;
	GetComCard(_comCard2);
	cout << endl;

	_playerMatch = CheckCardMatch(_playerCard1, _playerCard2);
	_comMatch = CheckCardMatch(_comCard1, _comCard2);

	isGameEnd = CompareMatch(_playerMatch, _comMatch);

}

void MainGame01::ShuffleCard()
{

	//카드 초기화
	for (int i = 0; i < 20; i++)
	{
		_cards[i] = i + 1;
	}


	//카드 섞기
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 20;
		int index2 = rand() % 20;
		int temp = _cards[index1];
		_cards[index1] = _cards[index2];
		_cards[index2] = temp;
	}
}

void MainGame01::GiveCard()
{
	//플레이어 카드 배분
	_playerCard1 = _cards[0];
	_playerCard2 = _cards[1];

	//컴퓨터 카드 배분
	_comCard1 = _cards[2];
	_comCard2 = _cards[3];
}

void MainGame01::GetPlayerCard(int cardNum)
{
	
	cout << "플레이어 패 : ";
	CheckCard(cardNum);
}

void MainGame01::GetComCard(int cardNum)
{
	cout << "컴퓨터 패 : ";
	CheckCard(cardNum);
}

void MainGame01::CheckCard(int cardNum)
{
	switch (cardNum)
	{
	case 1:
		cout << "1광";
		break;
	case 2:
		cout << "2끗";
		break;
	case 3:
		cout << "3광";
		break;
	case 4:
		cout << "4끗";
		break;
	case 5:
		cout << "5끗";
		break;
	case 6:
		cout << "6끗";
		break;
	case 7:
		cout << "7끗";
		break;
	case 8:
		cout << "8광";
		break;
	case 9:
		cout << "9끗";
		break;
	case 10:
		cout << "10끗";
		break;
	case 11:
		cout << "1띠";
		break;
	case 12:
		cout << "2띠";
		break;
	case 13:
		cout << "3띠";
		break;
	case 14:
		cout << "4띠";
		break;
	case 15:
		cout << "5띠";
		break;
	case 16:
		cout << "6띠";
		break;
	case 17:
		cout << "7띠";
		break;
	case 18:
		cout << "8끗";
		break;
	case 19:
		cout << "9띠";
		break;
	case 20:
		cout << "10띠";
		break;
	default:
		break;
	}
}

int MainGame01::CheckCardMatch(int card1, int card2)
{
	if (card1 % 10 == card2 % 10)
	{
		switch (card1 % 10)
		{
		case 1:
			cout << ECardMatch::D1 << endl;
			return ECardMatch::D1;
			break;
		case 2:
			cout << ECardMatch::D2 << endl;
			return ECardMatch::D2;
			break;
		case 3:
			cout << ECardMatch::D3 << endl;
			return ECardMatch::D3;
			break;
		case 4:
			cout << ECardMatch::D4 << endl;
			return ECardMatch::D4;
			break;
		case 5:
			cout << ECardMatch::D5 << endl;
			return ECardMatch::D5;
			break;
		case 6:
			cout << ECardMatch::D6 << endl;
			return ECardMatch::D6;
			break;
		case 7:
			cout << ECardMatch::D7 << endl;
			return ECardMatch::D7;
			break;
		case 8:
			cout << ECardMatch::D8 << endl;
			return ECardMatch::D8;
			break;
		case 9:
			cout << ECardMatch::D9 << endl;
			return ECardMatch::D9;
			break;
		case 10:
			cout << ECardMatch::D10 << endl;
			return ECardMatch::D10;
			break;
		default:
			break;
		}
	}
	else if ((card1 + card2) % 10 == 3)
	{
		if (card1 == 1 || card1 == 2 || card1 == 11 || card1 == 12)
		{
			cout << ECardMatch::M12 << endl;
			return ECardMatch::M12;
		}
		else
		{
			cout << ECardMatch::G3 << endl;
			return ECardMatch::G3;
		}
	}
	else if ((card1 + card2) % 10 == 5)
	{
		cout << ECardMatch::M14 << endl;
		return ECardMatch::M14;
	}
	else if ((card1 + card2) % 10 == 0)
	{
		if (card1 == 2 || card1 == 12 || card1 == 8 || card1 == 18)
		{
			cout << ECardMatch::G0 << endl;
			return ECardMatch::G0;
		}
		else if(card1 ==1 || card1 == 9 || card1 == 11 || card1 == 19)
		{
			cout << ECardMatch::M19 << endl;
			return ECardMatch::M19;
		}
		else
		{
			cout << ECardMatch::M46 << endl;
			return ECardMatch::M46;
		}
	}
	else if ((card1 + card2) % 10 == 1)
	{
		if (card1 == 10 || card1 == 1 || card1 == 11 || card1 == 20)
		{
			cout << ECardMatch::M110 << endl;
			return ECardMatch::M110;
		}
		else
		{
			cout << ECardMatch::G1 << endl;
			return ECardMatch::G1;
		}
	}
	else if ((card1 + card2) % 10 == 4)
	{
		if (card1 == 10 || card1 == 4 || card1 == 20 || card1 == 14)
		{
			cout << ECardMatch::M410 << endl;
			return ECardMatch::M410;
		}
		else 
		{
			cout << ECardMatch::G4 << endl;
			return ECardMatch::G4;
		}
	}
	else if ((card1 + card2) % 10 == 5)
	{
		if (card1 == 1 || card1 == 4 || card1 == 11 || card1 == 14)
		{
			cout << ECardMatch::M14 << endl;
			return ECardMatch::M14;
		}
		else 
		{
			cout << ECardMatch::G5 << endl;
			return ECardMatch::G5;
		}
	
	}
	else if ((card1 + card2) % 10 == 9)
	{
		cout << ECardMatch::G9 << endl;
		return ECardMatch::G9;
	}
	else if ((card1 + card2) % 10 == 8)
	{
		cout << ECardMatch::G8 << endl;
		return ECardMatch::G8;
	}
	else if ((card1 + card2) % 10 == 7)
	{
		cout << ECardMatch::G7 << endl;
		return ECardMatch::G7;
	}
	else if ((card1 + card2) % 10 == 6)
	{
		cout << ECardMatch::G6 << endl;
		return ECardMatch::G6;
	}
	else if ((card1 + card2) % 10 == 2)
	{
		cout << ECardMatch::G2 << endl;
		return ECardMatch::G2;
	}



	if (card1 == 3 && card2 == 8)
	{
		cout << ECardMatch::GD38 << endl;
		return ECardMatch::GD38;
	}
	else if (card1 == 8 && card2 == 3)
	{
		cout << ECardMatch::GD38 << endl;
		return ECardMatch::GD38;
	}
	else if (card1 == 1 && card2 == 3)
	{
		cout << ECardMatch::GD13 << endl;
		return ECardMatch::GD13;
	}
	else if (card1 == 3 && card2 == 1)
	{
		cout << ECardMatch::GD13 << endl;
		return ECardMatch::GD13;
	}
	else if (card1 == 1 && card2 == 8)
	{
		cout << ECardMatch::GD18 << endl;
		return ECardMatch::GD18;
	}
	else if (card1 == 8 && card2 == 1)
	{
		cout << ECardMatch::GD18 << endl;
		return ECardMatch::GD18;
	}
	
}

bool MainGame01::CompareMatch(int playerMatch, int comMatch)
{
	if (playerMatch == comMatch)
	{
		cout << "무승부 입니다." << endl;
		return false;
	}
	else if (playerMatch < comMatch)
	{
		cout << "플레이어 승리 입니다." << endl;
		return true;
	}
	else
	{
		cout << "플레이어 패배 입니다." << endl;
		return true;
	}
}


