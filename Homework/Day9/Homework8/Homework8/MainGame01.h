#pragma once

class MainGame01
{
public:
	void Init();
	void Run();
	void ShuffleCard();
	void GiveCard();
	void CheckCard(int cardNum);
	void GetPlayerCard(int cardNum);
	void GetComCard(int cardNum);
	int CheckCardMatch(int card1, int card2);
	bool CompareMatch(int playerMatch, int comMatch);
	

public:
	int _cards[20] = {0};
	int _playerCard1 = 0;
	int _playerCard2 = 0;
	int _comCard1 = 0;
	int _comCard2 = 0;
	int _playerMatch = 0;
	int _comMatch = 0;
	int _cardNum = 0;
	int _result = 0;
	bool isGameEnd = false;
};

