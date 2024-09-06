#include <iostream>
#include <Windows.h>
#include <conio.h>

//실습+GotoXY 하다가 시간 부족
using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper
};

enum class EPlayerResult
{
	Win,
	Lose,
	Draw
};

struct Monster
{
	int hp;
	int attack;

	void PrintInfo()
	{
		cout << "몬스터 HP : " << this->hp << endl;
		cout << "몬스터 ATK : " << this->attack << endl;
	}
};

struct Player
{
	int hp;
	int attack;

	void PrintInfo()
	{
		cout << "플레이어 HP : " << this->hp << endl;
		cout << "플레이어 ATK : " << this->attack << endl;
	}
};

void SetMainPage(int playerChoice, int comChoice, int result);
int CheckPlayerChoice(int playerChoice);
int CheckComChoice(int comChoice);
int CheckResult(int playerChoice, int comChoice);
void StartBattle(int result, Monster& monster, Player& player);
bool CheckBattleResult(Monster monster, Player player);
void GotoXY(int x, int y);



void main()
{
	srand(time(NULL));
	int playerChoice = 0;
	int comChoice = 0;
	int result = 0;
	bool isGamePlaying = true;
	Monster monster = { };
	Player player = { };

	monster.hp = 10;
	monster.attack = 2;
	player.hp = 10;
	player.attack = 2;

	SetMainPage(playerChoice, comChoice, result);

	while (isGamePlaying == true)
	{
		SetMainPage(playerChoice, comChoice, result);

		playerChoice = CheckPlayerChoice(playerChoice);
		//cout << "플레이어 선택 : " << playerChoice << endl;
		comChoice = CheckComChoice(comChoice);
		//cout << "컴퓨터 선택 : " << comChoice << endl;

		result = CheckResult(playerChoice, comChoice);

		StartBattle(result, monster, player);

		isGamePlaying = CheckBattleResult(monster, player);


	}
}
void SetMainPage(int playerChoice, int comChoice, int result)
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
	GotoXY(0, 9); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 10); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 11); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 12); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 13); cout << "└──────────────────────────────────────────────┘";

	GotoXY(15, 1); cout << "가위 바위 보 전투";
	GotoXY(10, 2); cout << "바위(0), 가위(1), 보(2)를 정해주세요";

	GotoXY(3, 3);
	cout << "플레이어 입력 : ";
	cin >> playerChoice;

	GotoXY(3, 5);
	cout << "플레이어 선택 : " << playerChoice << endl;

	GotoXY(3, 6);
	cout << "컴퓨터 선택 : " << comChoice << endl;

	if (result == (int)EPlayerResult::Win)
	{
		GotoXY(3, 7);
		cout << "전투 결과 : 플레이어 승리" << endl;
	}
	else if(result == (int)EPlayerResult::Lose)
	{
		GotoXY(3, 7);
		cout << "전투 결과 : 플레이어 패배" <<  endl;
	}
	else if (result == (int)EPlayerResult::Draw)
	{
		GotoXY(3, 7);
		cout << "전투 결과 : 플레이어 무승부" <<  endl;
	}
}

int CheckPlayerChoice(int playerChoice)
{
	
	cin >> playerChoice;
	//cout << "플레이어 선택 : " << playerChoice << endl;
	return playerChoice;
}

int CheckComChoice(int comChoice)
{
	comChoice = rand() % 3;
	//cout << "컴퓨터 선택 : " << comChoice << endl;
	return comChoice;
}

int CheckResult(int playerChoice, int comChoice)
{
	if (playerChoice == comChoice)
	{
		cout << "무승부 입니다." << endl;
		cout << endl;
		return (int)EPlayerResult::Draw;
	}
	else if (playerChoice == (int)ERockScissorPaper::Rock && comChoice == (int)ERockScissorPaper::Scissor)
	{
		cout << "플레이어 승리입니다." << endl;
		cout << endl;
		return (int)EPlayerResult::Win;
	}
	else if (playerChoice == (int)ERockScissorPaper::Scissor && comChoice == (int)ERockScissorPaper::Paper)
	{
		cout << "플레이어 승리입니다." << endl;
		cout << endl;
		return (int)EPlayerResult::Win;
	}
	else if (playerChoice == (int)ERockScissorPaper::Paper && comChoice == (int)ERockScissorPaper::Rock)
	{
		cout << "플레이어 승리입니다." << endl;
		cout << endl;
		return (int)EPlayerResult::Win;
	}
	else
	{
		cout << "플레이어 패배입니다." << endl;
		cout << endl;
		return (int)EPlayerResult::Lose;
	}
}

void StartBattle(int result, Monster& monster, Player& player)
{
	switch (result)
	{
	case (int)EPlayerResult::Win:
		monster.hp -= player.attack;
		player.PrintInfo();
		cout << endl;
		monster.PrintInfo();
		cout << endl;
		break;
	case (int)EPlayerResult::Lose:
		player.hp -= monster.attack;
		player.PrintInfo();
		cout << endl;
		monster.PrintInfo();
		cout << endl;
		break;
	case (int)EPlayerResult::Draw:
		cout << "전투가 벌어지지 않았습니다." << endl;
		break;
	}
}

bool CheckBattleResult(Monster monster, Player player)
{
	if (monster.hp <= 0)
	{
		cout << "몬스터의 체력이 0이 되었습니다." << endl;
		cout << "플레이어 승리" << endl;
		return false;
	}
	else if (player.hp <= 0)
	{
		cout << "플레이어의 체력이 0이 되었습니다." << endl;
		cout << "플레이어 패배" << endl;
		return false;
	}
}

void GotoXY(int x, int y)
{
	COORD pos = { x, y };
	::SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

