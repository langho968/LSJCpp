#include <iostream>

using namespace std;

void main()
{
	//시작시 레벨1

	//매턴마다 자신 공격력 상대 공격력 비교해서 높으면 승리 지면 패배
	//승리 시 레벨 업 및 자신 공격력 + 4 증가
	//1단계 / 1~6
	//2단계 / 1~10
	//3단계 / 1~14
	//도망치기 시 확률로 사망
	//1단계 / 10 %
	//2단계 / 15 %
	//3단계 / 20 %

	//랜덤 공격력 1~6

	//몬스터 랜덤 공격력
	//1단계 / 1~6
	//2단계 / 1~8
	//3단계 / 1~10

	srand(time(NULL));

	int playerAtk;
	int monsterAtk;
	int choice;
	int runFailPercent;
	int runCount = 0;

	cout << "텍스트 RPG 시작" << endl;
	cout << "플레이어는 1레벨로 시작하며 전투에서 승리 시 레벨 업을 할 수 있습니다." << endl;
	cout << "플레이어의 공격력은 1~6 중 랜덤으로 정해지며 몬스터의 공격력 보다 높을 시 승리합니다." << endl;
	cout << "레벨 업 시 공격력 범위가 +4 됩니다." << endl;
	cout << "도망치기를 통해 전투를 진행하지 않고 단계를 넘길 수 있습니다." << endl;
	cout << "도망치기 시도 시 일저 확률로 사망할 수 있습니다." << endl;
	cout << "던전에 입장하였습니다." << endl;
	

	//던전 1단계
	cout << "1단계 진입" << endl;
	cout << "전투 하시겠습니까?(0) 도망치시겠습니까?(1)" << endl;
	cin >> choice;

	//전투 선택 시
	if (choice == 0)
	{
		//플레이어 및 몬스터 공격력 스탯
		playerAtk = rand() % 6 + 1;
		monsterAtk = rand() % 6 + 1;
		cout << "플레이어 공격력 : " << playerAtk << endl;
		cout << "몬스터 공격력 : "<< monsterAtk << endl;


		//전투 승리
		if (monsterAtk < playerAtk)
		{
			cout << "플레이어 승리 공격력 범위가 +4 됩니다." << endl;
		}
		//전투 패배
		else
		{
			cout << "플레이어 패배 사망하였습니다.";
			return;
		}
	}
	//도망 선택 시
	else
	{
		//도망 횟수 및 도망 실패 확률(10%)
		runCount++;
		runFailPercent = rand() % 10;
		
		//도망 실패
		if (runFailPercent == 0)
		{
			
			cout << "플레이어 패배 사망하였습니다.";
			return;
		}
		//도망 성공
		else
		{
			cout << "도망에 성공하였습니다. 다음 단계에 진입합니다." << endl;
		}
	}

	//던전 2단계
	cout << "2단계 진입" << endl;
	cout << "전투 하시겠습니까?(0) 도망치시겠습니까?(1)" << endl;
	cin >> choice;

	//전투 선택 시
	if (choice == 0)
	{
		// 1단계에서 도망을 선택했을시
		if (runCount == 1)
		{
			//플레이어 및 몬스터 공격력 스탯
			playerAtk = rand() % 6 + 1;
			monsterAtk = rand() % 8 + 1;
			cout << "플레이어 공격력 : " << playerAtk << endl;
			cout << "몬스터 공격력 : " << monsterAtk << endl;


			//전투 성공
			if (monsterAtk < playerAtk)
			{
				cout << "플레이어 승리 공격력 범위가 +4 됩니다." << endl;
			}
			//전투 패배
			else
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
		}
		//1단계에서 도망을 선택하지 않았을 시
		else
		{
			//플레이어 및 몬스터 공격력 스탯
			playerAtk = rand() % 10 + 1;
			monsterAtk = rand() % 8 + 1;
			cout << "플레이어 공격력 : " << playerAtk << endl;
			cout << "몬스터 공격력 : " << monsterAtk << endl;


			//전투 승리
			if (monsterAtk < playerAtk)
			{
				cout << "플레이어 승리 공격력 범위가 +4 됩니다." << endl;
			}
			//전투 패배
			else
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
		}
	}
	//도망 선택 시
	else
	{
		//도망 횟수
		runCount++;

		//1단계에서 도망을 선택했을시
		if (runCount == 1)
		{
			//도망 실패 확률 15%
			runFailPercent = rand() % 20;

			//도망 실패
			if (runFailPercent == 0 || runFailPercent == 1 || runFailPercent ==2)
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
			//도망 성공
			else
			{
				cout << "도망에 성공하였습니다. 다음 단계에 진입합니다." << endl;
			}
		}
		//1단계에서 도망을 선택하지 않았을 시
		else
		{
			//도망 실패 확률 10%
			runFailPercent = rand() % 10;
		
			//도망 실패
			if (runFailPercent == 0)
			{

				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
			//도망 성공
			else
			{
				cout << "도망에 성공하였습니다. 다음 단계에 진입합니다." << endl;
			}
		}
	}

	//던전 3단계
	cout << "3단계 진입" << endl;
	cout << "전투 하시겠습니까?(0) 도망치시겠습니까?(1)" << endl;
	cin >> choice;

	//전투 선택 시
	if (choice == 0)
	{
		// 도망을 1번 선택했을 시
		if (runCount == 1)
		{
			//플레이어 및 몬스터 스탯
			playerAtk = rand() % 10 + 1;
			monsterAtk = rand() % 10 + 1;
			cout << "플레이어 공격력 : " << playerAtk << endl;
			cout << "몬스터 공격력 : " << monsterAtk << endl;


			//전투 승리
			if (monsterAtk < playerAtk)
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 2번의 전투를 승리하여서 2레벨에 도달하였으며 1번 도망을 선택하였습니다." << endl;
			}
			//전투 패배
			else
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
		}
		//도망을 2번 선택했을 시
		else if(runCount == 2)
		{
			//플레이어 및 몬스터 스탯
			playerAtk = rand() % 6 + 1;
			monsterAtk = rand() % 10 + 1;
			cout << "플레이어 공격력 : " << playerAtk << endl;
			cout << "몬스터 공격력 : " << monsterAtk << endl;


			//전투 승리
			if (monsterAtk < playerAtk)
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 1번의 전투를 승리하여서 1레벨에 도달하였으며 2번 도망을 선택하였습니다." << endl;
			}
			//전투 패배
			else
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
		}
		//도망을 선택하지 않았을 시
		else
		{
			//플레이어 및 몬스터 스탯
			playerAtk = rand() % 14 + 1;
			monsterAtk = rand() % 10 + 1;
			cout << "플레이어 공격력 : " << playerAtk << endl;
			cout << "몬스터 공격력 : " << monsterAtk << endl;


			//전투 승리
			if (monsterAtk < playerAtk)
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 3번의 전투를 승리하여서 4레벨에 도달하였으며 0번 도망을 선택하였습니다." << endl;
			}
			//전투 패배
			else
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
		}
	}
	//도망 선택 시
	else
	{
		cout << "도망횟수" << runCount << endl;
		//도망을 2번 선택했을 시
		if (runCount == 1)
		{
			//도망 실패 확률 15%
			runFailPercent = rand() % 20;
			
			//도망 실패
			if (runFailPercent == 0 || runFailPercent == 1 || runFailPercent ==2)
			{
				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
			//도망 성공
			else
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 0번의 전투를 승리하여서 1레벨에 도달하였으며 3번 도망을 선택하였습니다." << endl;
			}
		}
		//도망을 1번 선택했을 시
		else if(runCount ==2)
		{
			//도망 실패 확률 20%
			runFailPercent = rand() % 10;
			
			//도망 실패
			if (runFailPercent == 0 || runFailPercent == 1)
			{

				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
			//도망 성공
			else
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 1번의 전투를 승리하여서 2레벨에 도달하였으며 1번 도망을 선택하였습니다." << endl;
			}
		}
		//도망을 선택하지 않았을 시
		else
		{
			//도망 실패 확률 10 %
			runFailPercent = rand() % 10;
			
			//도망 실패
			if (runFailPercent == 0)
			{

				cout << "플레이어 패배 사망하였습니다.";
				return;
			}
			//도망 성공
			else
			{
				cout << "축하드립니다. 던전을 탈출하셨습니다." << endl;
				cout << "플레이어는 총 2번의 전투를 승리하여서 3레벨에 도달하였으며 1번 도망을 선택하였습니다." << endl;
			}
		}
	}

}