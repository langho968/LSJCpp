#include <iostream>

using namespace std;

void main()
{
	//숙제풀이
	//Text RPG
	srand(time(NULL));
	int playerLevel = 1;
	bool playerAlive = true;
	cout << "플레이어는" << playerLevel << "레벨 입니다." << endl;
	cout << "던전에 입장하였습니다." << endl;
	cout << "1레벨 고블린과 조우하였습니다. (1: 싸우기, 2: 도망가기)" << endl;
	int choice = 0;

	cin >> choice;
	if (choice == 1)
	{
		cout << "싸우기를 선택하였습니다." << endl;
		float diePotint = (float)1 / (float)(1 + playerLevel * 2);
		int random = rand() % 100;
		if (random < diePotint)
		{
			//사망
			cout << "플레이어는 사망하였습니다." << endl;
			playerAlive = false;
			exit(0);
		}
		else
		{
			playerLevel++;
			cout << "전투에서 승리하였습니다." << endl;
			cout << "플레이어가 레벨이 올랐습니다. 현재 레벨 : " << playerLevel << endl;

		}
	}
	else if (playerAlive && choice == 2)
	{
		int random = rand() % 100;

		if (random < 10)
		{
			playerAlive = false;
			cout << "플레이어가 사망하였습니다." << endl;
			exit(0);
		}
		else
		{
			cout << "플레이어가 도망에 성공하였습니다." << endl;
		}
	}

	cout << "플레이어는 " << playerLevel << "레벨로 던전에 탈출하였습니다." << endl;
	cout << "축하드립니다. 게임을 클리어하였습니다." << endl;

	//실제로 값을 확인해서 체크
	//2가지방법
	//1.로그를 찍는다.
	//2. 디버그
}