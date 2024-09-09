#pragma once
class MainGame
{
public:
	void Init();
	void Update();
	void Release();
	void ShuffleCard();

	bool IsGameEnd();


public:
	//클래스의 멤버변수는 _로 시작
	int _card[52] = {};
};

