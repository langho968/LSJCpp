#include <iostream>

using namespace std;

// 2중포문 별찍기

void MakeStarFisrt()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}

void MakeStarSecond()
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}


		cout << endl;
	}
}

void MakeStarThird()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}

		cout << endl;
	}
}

void MakeStarFourth()
{
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < 5 - i; k++)
		{
			cout << "*";
		}

		cout << endl;
	}
}

// 5번
// *    *****
// **   ****
// ***  ***
// **** **
// ******
//     ******
//    ** ****
//   ***  ***
//  ****   **
// *****    *
void MakeStarFifth()
{


}

void main()
{

	MakeStarFisrt();

	cout << endl;

	MakeStarSecond();

	cout << endl;

	MakeStarThird();

	cout << endl;

	MakeStarFourth();

	cout << endl;

	MakeStarFifth();
}