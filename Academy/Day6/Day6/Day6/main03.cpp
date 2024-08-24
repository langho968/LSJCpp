#include <iostream>

using namespace std;


void main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "[" << i << " " << j << "] ";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl << endl;
	//*****
	//****
	//***
	//**
	//*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	cout << endl << endl;
	//     *
	//    **
	//   ***
	//  ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

	// *****
	//  ****
	//   ***
	//    **
	//     *
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;

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

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}
