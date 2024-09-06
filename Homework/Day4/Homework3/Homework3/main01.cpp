#include <iostream>

using namespace std;

void main()
{
	//로또 번호 뽑기
	
	srand(time(NULL));
	int num[45] = {};
	int rotto[6] = {};


	for (int i = 0; i < 45; i++)
	{
		num[i] = i + 1;
	}

	//1~45까지 숫자 섞기
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = num[index1];
		num[index1] = num[index2];
		num[index2] = temp;
	}

	// 로또 번호 6자리 선택
	for (int i = 0; i < 6; i++) {
		rotto[i] = num[i];
	}


	printf("로또 번호 여섯 자리 : %d, %d, %d, %d, %d, %d ", rotto[0], rotto[1], rotto[2], rotto[3], rotto[4], rotto[5]);
}