#include <iostream>
#define STAR -1

using namespace std;

int comBingo[5][5] = {};
int playerBingo[5][5] = {};
int playerNumCheck[25] = {};
int comNumCheck[25] = {};
int playerInputNum;
int comInpuNum;
int comBingoCount;
int playerBingoCount;

bool isBingo = false;


void ShuffleBingo();
void PrintBingo();
void InputPlayerNum();
void InputComNum();
void ChangePlayerBingo();
void ChangeComBingo();
void CheckBingo();


void main()
{
	srand(time(NULL));

	//빙고판 섞기
	ShuffleBingo();

	while (isBingo == false)
	{
		//빙고판 확인
		PrintBingo();

		//플레이어 숫자 넣기
		InputPlayerNum();

		//컴퓨터 숫자 넣기
		InputComNum();

		//플레이어 빙고판 변경
		ChangePlayerBingo();

		//컴퓨터 빙고판 변경
		ChangeComBingo();

		//빙고 개수 체크
		CheckBingo();
	}

	PrintBingo();
	cout << "게임 종료";
}

void ShuffleBingo()
{
	//빙고판 초기화
	for (int i = 0; i < 25; i++)
	{
		comBingo[i / 5][i % 5] = i + 1;
		playerBingo[i / 5][i % 5] = i + 1;
	}

	//빙고판 섞기
	for (int i = 0; i < 10000; i++)
	{
		int idx[8] = {};
		for (int j = 0; j < 8; j++)
		{
			idx[j] = rand() % 5;
		}

		//컴퓨터 빙고판 섞기
		int temp1 = comBingo[idx[0]][idx[1]];
		comBingo[idx[0]][idx[1]] = comBingo[idx[2]][idx[3]];
		comBingo[idx[2]][idx[3]] = temp1;

		//플레이어 빙고판 섞기
		int temp2 = playerBingo[idx[4]][idx[5]];
		playerBingo[idx[4]][idx[5]] = playerBingo[idx[6]][idx[7]];
		playerBingo[idx[6]][idx[7]] = temp2;

	}

}

void PrintBingo()
{
	//컴퓨터 빙고판 초기화 확인
	cout << "컴퓨터 빙고판" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//*찍어야하는지 확인
			if (comBingo[i][j] == STAR)
			{
				cout << "*\t";
			}
			else
			{
				cout << comBingo[i][j] << "\t";
			}

		}
		cout << endl;
	}

	cout << "플레이어 빙고판" << endl;
	//플레이어 빙고판 초기화 확인
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//*찍어야하는지 확인
			if (playerBingo[i][j] == STAR)
			{
				cout << "*\t";
			}
			else
			{
				cout << playerBingo[i][j] << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void InputPlayerNum()
{
	bool isDuplicate = true;
	while (isDuplicate == true)
	{
		cout << "1~25의 숫자를 적어주세요" << endl;
		cin >> playerInputNum;
		cout << endl;

		//범위 밖 숫자 시
		if (playerInputNum < 1 || playerInputNum>25)
		{
			cout << "범위 밖의 숫자 입니다. 다시 입력해주세요" << endl;
			continue;
		}

		//중복 확인
		for (int i = 0; i < 25; i++)
		{
			if (playerInputNum == playerBingo[i / 5][i % 5])
			{
				isDuplicate = false;
				break;

			}

		}

	}
}

void InputComNum()
{
	bool isDuplicate = true;
	while (isDuplicate == true)
	{
		comInpuNum = rand() % 25 + 1;

		//중복 확인
		for (int i = 0; i < 25; i++)
		{

			if (comInpuNum == comBingo[i / 5][i % 5])
			{
				isDuplicate = false;
				break;
			}
		}
		cout << "컴퓨터 선택 넘버 : " << comInpuNum << endl;
	}
}

void ChangePlayerBingo()
{

	for (int i = 0; i < 25; i++)
	{
		if (playerInputNum == playerBingo[i / 5][i % 5])
		{
			playerBingo[i / 5][i % 5] = STAR;

		}
		else if (comInpuNum == playerBingo[i / 5][i % 5])
		{
			playerBingo[i / 5][i % 5] = STAR;
		}
	}
}

void ChangeComBingo()
{
	for (int i = 0; i < 25; i++)
	{
		if (playerInputNum == comBingo[i / 5][i % 5])
		{
			comBingo[i / 5][i % 5] = STAR;

		}
		else if (comInpuNum == comBingo[i / 5][i % 5])
		{
			comBingo[i / 5][i % 5] = STAR;
		}
	}
}

void CheckBingo()
{
	playerBingoCount = 0;
	comBingoCount = 0;

	//유저 가로 세로 빙고 체크
	for (int i = 0; i < 5; i++)
	{
		int check1 = 0;
		int check2 = 0;
		for (int j = 0; j < 5; j++)
		{
			//빙고 가로 체크
			if (playerBingo[i][j] == STAR)
			{
				check1++;
			}
			//빙고 세로 체크
			if (playerBingo[j][i] == STAR)
			{
				check2++;
			}

			if (check1 == 5)
			{
				playerBingoCount++;
			}
			if (check2 == 5)
			{
				playerBingoCount++;
			}

		}
	}

	int check3 = 0;
	//유저 대각선 빙고 체크
	for (int i = 0; i < 5; i++)
	{

		if (playerBingo[i][i] == STAR)
		{
			check3++;
		}

	}
	if (check3 == 5)
	{
		playerBingoCount++;
	}
	int check4 = 0;
	for (int i = 0; i < 5; i++)
	{
		int check4 = 0;
		if (playerBingo[i][4 - i] == STAR)
		{
			check4++;
		}

	}
	if (check4 == 5)
	{
		playerBingoCount++;
	}
	//컴퓨터 가로 세로 빙고 체크
	for (int i = 0; i < 5; i++)
	{
		int check1 = 0;
		int check2 = 0;
		for (int j = 0; j < 5; j++)
		{
			//빙고 가로 체크
			if (comBingo[i][j] == STAR)
			{
				check1++;
			}
			//빙고 세로 체크
			if (comBingo[j][i] == STAR)
			{
				check2++;
			}

			if (check1 == 5)
			{
				comBingoCount++;
			}
			if (check2 == 5)
			{
				comBingoCount++;
			}

		}
	}


	//컴퓨터 대각선 빙고 체크
	int check6 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (comBingo[i][i] == STAR)
		{
			check6++;
		}
	}
	if (check6 == 5)
	{
		comBingoCount++;
	}
	int check7 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (comBingo[i][4 - i] == STAR)
		{
			check7++;
		}
	}
	if (check7 == 5)
	{
		comBingoCount++;
	}

	cout << "플레이어 빙고 : " << playerBingoCount << endl;
	cout << "컴퓨터 빙고 : " << comBingoCount << endl;
	cout << endl;
	//빙고 개수 체크
	if (playerBingoCount >= 3 && comBingoCount >= 3)
	{
		cout << "플레이어와 컴퓨터가 동시에 3 빙고 성공" << endl;
		isBingo = true;
	}
	else if (playerBingoCount == 3)
	{
		cout << "플레이어 3 빙고 성공" << endl;
		isBingo = true;
	}
	else if (comBingoCount == 3)
	{
		cout << "컴퓨터 3 빙고 성공" << endl;
		isBingo = true;
	}

}