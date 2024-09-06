#include <iostream>

//가위바위보 전투 실습
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



	while (isGamePlaying == true)
	{
		playerChoice = CheckPlayerChoice(playerChoice);
		//cout << "플레이어 선택 : " << playerChoice << endl;
		comChoice = CheckComChoice(comChoice);
		//cout << "컴퓨터 선택 : " << comChoice << endl;

		result = CheckResult(playerChoice, comChoice);

		StartBattle(result, monster, player);

		isGamePlaying = CheckBattleResult(monster, player);


	}
}

int CheckPlayerChoice(int playerChoice)
{
	cout << "바위(0), 가위(1), 보(2)를 정해주세요" << endl;
	cin >> playerChoice;
	cout << endl;
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
	cout << "플레이어 선택 : " << playerChoice << endl;
	cout << "컴퓨터 선택 : " << comChoice << endl;
	if (playerChoice == comChoice)
	{
		cout << "무승부 입니다." << endl;
		return (int)EPlayerResult::Draw;
	}
	else if (playerChoice == (int)ERockScissorPaper::Rock && comChoice == (int)ERockScissorPaper::Scissor)
	{
		cout << "플레이어 승리입니다." << endl;
		return (int)EPlayerResult::Win;
	}
	else if (playerChoice == (int)ERockScissorPaper::Scissor && comChoice == (int)ERockScissorPaper::Paper)
	{
		cout << "플레이어 승리입니다." << endl;
		return (int)EPlayerResult::Win;
	}
	else if (playerChoice == (int)ERockScissorPaper::Paper && comChoice == (int)ERockScissorPaper::Rock)
	{
		cout << "플레이어 승리입니다." << endl;
		return (int)EPlayerResult::Win;
	}
	else
	{
		cout << "플레이어 패배입니다." << endl;
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
		monster.PrintInfo();
		break;
	case (int)EPlayerResult::Lose:
		player.hp -= monster.attack;
		player.PrintInfo();
		monster.PrintInfo();
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
