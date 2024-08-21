#include <iostream>

using namespace std;

void main()
{
	//반복문 3가지 for while do-while

	for (int i = 0; i < 1000; i++)
	{

	}

	//while 문

	bool isGamePlaying = true;
	while (isGamePlaying == true)
	{
		cout << "게임을 종료하겠습니까?(0:예, 그외 : 아니오)" << endl;
		int choice;
		cin >> choice;

		if (choice == 0)
		{
			isGamePlaying = false;
		}
	}

	//while(조건식)
	//{
	//	실행구문
	//}

	//조건식이 참이면 실행구문을 실행

	//while문 사용할때
	//우리가 한글을 해석했을때 ~하는 동안 이라는 느낌이 나면 사용

	//for문은 -> 몇번
	//while 문은 -> ~~하는 동안

	//실습 while -> for
	


	//실습 for->while
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	//잘 안쓰이는 do-while
	int choice = 0;
	do
	{
		cout << "왼손(0)과 오른손(1)중에 선택해주세요." << endl;
		cin >> choice;
	} while (2 < choice || choice > 0);

	cout << "왼손(0)과 오른손(1)중에 선택해주세요." << endl;
	cin >> choice;
	while (2 < choice || choice > 0)
	{
		cout << "잘못 선택하셨습니다. 다시 골라주세요" << endl;
		cin >> choice;
	}


}