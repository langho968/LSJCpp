#include <iostream>

using namespace std;

void main()
{
	int arr[1000] = {};

	for (int i = 0; i < 1000; i++)
	{
		arr[i] = i;
	}

	//arr의 배열에서 3의 배수만 출력하고 싶다.
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 == 0)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
	}

		for (int i = 0; i < 1000; i++)
		{
			if (arr[i] % 3 != 0)
			{
				//반복문 로직안에서 유효성 체크할때 많이 사용
				continue;
			}
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}


		//break;
		//중간에 반복문 탈출

		for (int i = 0; i < 1000; i++)
		{
			if (i== 500)
			{
				break;
			}
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}

}