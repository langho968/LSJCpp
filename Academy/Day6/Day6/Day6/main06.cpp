#include <iostream>

using namespace std;

void main()
{
	//다차원 배열
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int arr2[2][5] = { {1,2,3,4,5}, {6,7,8,9,10} };

	for (int i = 0; i < 10; i++)
	{
		cout << "arr[i] = " << arr[i] << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "arr2[i][j] = " << arr2[i][j] << endl;
		}
	}


	int bingo[25] = {};
	int bingo2[5][5] = {};
	for (int i = 0; i < 25; i++)
	{
		bingo[i] = i + 1;
		bingo2[i / 5][i % 5] = i + 1;
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo[i * 5 + j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo2[i][j]<< "\t";
		}
		cout << endl;
	}
}