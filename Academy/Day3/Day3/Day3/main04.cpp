#include <iostream>

using namespace std;

void main()
{
	
	int inputNumber = 0;

	cout << "숫자를 입력해주세요\n";

	cin >> inputNumber;

	if (inputNumber % 2 == 0)
	{
		cout << "[" << inputNumber << "]" << "는 짝수입니다." << endl;
	}
	else
	{
		cout << "[" << inputNumber << "]" << "는 홀수입니다." << endl;
	}

}