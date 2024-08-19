#include <iostream>

using namespace std;

void main()
{
	//for 문 + 배열

	int arr[10] = {};

	// 배열의 초기화
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	//출력
	for (int i = 0; i < 10; i++)
	{
		//cout << "arr[" << i << "] " << arr[i] << endl;
		printf("arr[%d] = %d", i, arr[i]);
	}
	
	//반복문안에 반복문
	//2중for문
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "[" << i << " " << j << "]" << " ";
		}
		cout << endl;
	}


	//arr에 담긴 변수들 섞기
	//
	srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{
		//인덱스를 2개 잡고 swap
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		//arr[index1] 과 arr[index2]의 변수를 swap
		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}
}