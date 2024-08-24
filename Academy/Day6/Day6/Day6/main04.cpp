#include <iostream>

using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper,
	End
};

void main()
{
	//3. switch 문법
	// 안배워도 되는문법 if문으로 완벽하게 대체 가능

	//가독성때문에 사용

	//while문 배운 이유랑 동일
	//for문이 더 상위호환이지만
	//가독성 측면에서 달라짐

	int hand = (int)ERockScissorPaper::Rock;
	switch (hand)
	{
	case(int)ERockScissorPaper::Rock:
		cout << "바위" << endl;
		break;
		
	case(int)ERockScissorPaper::Scissor:
		cout << "가위" << endl;
		break;

	case(int)ERockScissorPaper::Paper:
		cout << "보" << endl;
		break;

	default:
		cout << "잘못된값" << endl;
		break;
	}

	if (hand == (int)ERockScissorPaper::Rock)
	{
		cout << "바위" << endl;
	}
	else if (hand == (int)ERockScissorPaper::Scissor)
	{
		cout << "가위" << endl;
	}
	else if (hand == (int)ERockScissorPaper::Paper)
	{
		cout << "보" << endl;
	}
	else
	{
		cout << "잘못된값" << endl;
	}

	//if문과 switch문의 차이점
	//if문은 조건식을 적는거라
	//정수가 아니라 다른값이 들어올수있음
	//switch문은 정수만 적을 수 있다.
	//case 정수;

	//그렇기때문에 switch문은 제약사항이 더 많음
	//다만 그 제약사항이 더 좋게 작용할때가 많아서 사용 + 가독성

	//while문을 보면
	//~~하는 동안 반복하겠구나

	//for문을 보면
	//몇번 반복하겠구나

	//switch문을 
	//보면 저 값에 따라서 뭔가 이루어지겠구나


}