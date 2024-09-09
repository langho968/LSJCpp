#include "MainGame.h"
#include <iostream>

using namespace std;

void MainGame::Init()
{
	srand(time(NULL));

	cout<<"스네이크 게임을 시작하겠습니다."
}

void MainGame::ShuffleCard()
{
	for (int i = 0; i < 100000; i++)
	{
		int idx1 = rand() % 52;
		int idx2 = rand() % 52;
		int temp = _card[idx1];
		_card[idx1] = _card[idx2];
		_card[idx2] = temp;
	}
}

void MainGame::Update()
{
	ShuffleCard();
	for (int i = 0; i < 52; i++)
	{
		cout << _card[i] << endl;
	}
	
	IsGameEnd();
	
}
void MainGame::Release()
{

}

bool MainGame::IsGameEnd()
{
	return false;
}