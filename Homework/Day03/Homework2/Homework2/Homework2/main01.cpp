#include <iostream>

using namespace std;

void main()
{
	// 가위바위보

	srand(time(NULL));
	int playerChoice;
	int comChoice = rand()%3; //랜덤 난수 생성
	int result;
	

	cout << "가위(0) 바위(1) 보(2) 중에서 선택해주세요 : ";
	cin >> playerChoice;

	//유저 선택
	if (playerChoice == 0)
	{
		cout << "가위를 선택하셨습니다." << endl;
	}
	else if (playerChoice == 1)
	{
		cout << "바위를 선택하셨습니다." << endl;
	}
	else if (playerChoice == 2)
	{
		cout << "보를 선택하셨습니다." << endl;
	}

	//컴퓨터 선택
	if (comChoice == 0)
	{
		cout << "컴퓨터는 가위를 선택하였습니다." << endl;
	}
	else if (comChoice == 1)
	{
		cout << "컴퓨터는 바위를 선택하였습니다." << endl;
	}
	else if (comChoice == 2)
	{
		cout << "컴퓨터는 보를 선택하였습니다." << endl;
	}

	//가위바위보 결과
	if (comChoice == playerChoice)
	{
		cout << "무승부입니다." << endl;
	}
	else if (comChoice == 0 && playerChoice == 1)
	{
		cout << "승리하였습니다." << endl;
	}
	else if (comChoice == 0 && playerChoice == 2)
	{
		cout << "패배하였습니다." << endl;
	}
	else if (comChoice == 1 && playerChoice == 2)
	{
		cout << "승리하였습니다." << endl;
	}
	else if (comChoice == 1 && playerChoice == 0)
	{
		cout << "패배하였습니다." << endl;
	}
	else if (comChoice == 2 && playerChoice == 1)
	{
		cout << "패배하였습니다." << endl;
	}
	else if (comChoice == 2 && playerChoice == 0)
	{
		cout << "승리하였습니다." << endl;
	}
}