#include <iostream>

using namespace std;

void main()
{
	//배열
	//배열이란?

	//가위바위보를 만들었는데,
	//가위바위보 하나뺴기를 만들었다
	// 한번에 내야하는 내용이 2개
	int playerLeftHand;
	int playerRightHand;

	//나중에 기획자가 플레이어는 5개 낸것중에 한개를 선택할거에요 라고함
	int playerChoiceHand1;
	int playerChoiceHand2;
	int playerChoiceHand3;
	int playerChoiceHand4;
	int playerChoiceHand5;

	//이렇게 많이 만들며 컨트롤하기에 너무 코드가 많아짐

	//그래서 변수를 한번에 선언해주는 기능
	//배열

	//자료형 변수명[길이] = {};
	int arr[10] = {};
	//사용
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 10;

	cout << "arr[0] = " << arr[0] << endl;

	//많이사용하는 알고리즘
	//Swap 알고리즘
	int a = 10;
	int b = 30;



	int temp;

	temp = a;
	a = b;
	b = temp;


	printf("a는 %d\n", a);
	printf("b는 %d", b);
	
	
}