#include <iostream>

using namespace std;

void main()
{
	//2중 for문으로 별찍기

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			 }
		}
		cout << endl;
	}
}