#include <iostream>

using namespace std;

//매크로
#define NUMBER_SIZE 3
//#define DEV_MODE


//ctrl + r + r
int computerNumber[NUMBER_SIZE] = {};
int userNumber[NUMBER_SIZE] = {};
bool isUserNumberComplete = false;
int strike = 0;
int ball = 0;

// 함수전방선언
void ChooseComputerNumber();
void ChooseUserNumber();
void CheckValidationUserNumber();
void CompareNumbers();
void PrintStrikeBallCount();
void InitUserVariable();


void main()
{
	srand(time(NULL));
	ChooseComputerNumber();
	for (int i = 0; i < 9; i++)
	{
		while (isUserNumberComplete == false)
		{
			ChooseUserNumber();
			CheckValidationUserNumber();
		}
		CompareNumbers();
		PrintStrikeBallCount();

		if (strike == NUMBER_SIZE)
		{
			break;
		}

		InitUserVariable();
	}

}

void ChooseComputerNumber()
{
	// 그냥 1000 ~ 9999 까지 랜덤숫자뽑아서
	// 각자릿수가 안겹치는지 체크하는방법

	// arr[10]을 만들고 0 ~9 까지 넣어둔다음
	// 배열을 섞은다음에
	// 첫번째자리가 0만안되게 잘뽑기


	// arr[10]을 만들고 0 ~9 까지 넣어둔다음
	int arr[10] = {};
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	// 배열을 섞은다음에
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	// 첫번째자리가 0만안되게 잘뽑기
	if (arr[0] == 0)
	{
		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			computerNumber[i] = arr[9 - i];
		}
	}
	else
	{

		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			computerNumber[i] = arr[i];
		}
	}

#ifdef DEV_MODE
	cout << "[디버깅용] 입력한 computerNumber : ";
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << computerNumber[i];
	}
	cout << endl;
#endif
}

void ChooseUserNumber()
{
	int tempNumber;
	cout << "부를 숫자를 입력해주세요 : ";

	//이거는 사용성이 너무 떨어집니다.
	//cin >> userNubmer[0];
	//cin >> userNubmer[1];
	//cin >> userNubmer[2];
	//cin >> userNubmer[3];

	cin >> tempNumber;
	// 1234 / 1000 => 1
	// 1234 / 100 => 12 % 10 => 2
	//userNumber[0] = tempNumber / 1000 % 10;
	//userNumber[1] = tempNumber / 100 % 10;
	//userNumber[2] = tempNumber / 10 % 10;
	//userNumber[3] = tempNumber / 1 % 10;

	// 반복문으로 처리가능하겠다.
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int length = NUMBER_SIZE - 1 - i;
		int divNumber = 1;
		for (int j = 0; j < length; j++)
		{
			divNumber *= 10;
		}
		userNumber[i] = tempNumber / divNumber % 10;
	}


#ifdef DEV_MODE
	cout << "[디버깅용] 입력한 userNumber : ";
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << userNumber[i];
	}
	cout << endl;
#endif

}
void CheckValidationUserNumber()
{

	//userNumber[0] ~ userNumber[4]
	isUserNumberComplete = true;
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int checkNumber1 = userNumber[i];
		for (int j = i + 1; j < NUMBER_SIZE; j++)
		{
			int checkNumber2 = userNumber[j];

			if (checkNumber1 == checkNumber2)
			{
				isUserNumberComplete = false;
			}
		}
	}


	//첫번째자릿수는 0이면 안됨.
	if (userNumber[0] == 0)
	{
		isUserNumberComplete = false;
	}

}

void CompareNumbers()
{


	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int currentComputerNumber = computerNumber[i];
		for (int j = 0; j < NUMBER_SIZE; j++)
		{
			int currentUserNumber = userNumber[j];

			if (currentComputerNumber == currentUserNumber)
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}

}

void PrintStrikeBallCount()
{
	cout << strike << "스트라이크, " << ball << "볼!" << endl;
}


void InitUserVariable()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		userNumber[i] = 0;
	}

	isUserNumberComplete = false;
	strike = 0;
	ball = 0;
}