#include <iostream>

using namespace std;

void main()
{
	//랜덤

	//랜덤 사용 방법
	/*int random1 = rand();
	cout << "랜덤값 : " << random1 << endl;

	int random2 = rand();
	cout << "랜덤값 : " << random2 << endl;*/

	//rand()를 쓸때마다 값이 달라짐 => 무작위 수
	
	//의문점
	//1. 모든 PC가 똑같은 수를 순서대로 배출하는 이유?
	//2. 모든 PC가 똑같은 수를 순서대로 배출하는데 우리가 쓰는 랜덤이랑 의미가 똑같을 쓸수나 있을까?

	//무작위수라는 거는 컴퓨터는 똑같은 결과값만 낼수 있기때문
	//rand()는 무작위수를 뽑기 위해 구현한 횟수
	//미리 고정된 난수를 seed를 통해 통안에 숫자들을 순서대로 넣은걸 그대로 뽑아오는 결과일뿐

	//seed를 썩는 함수
	//srand(값);
	//현재 시간 : time(NULL)

	/*srand(time(NULL));
	int random3 = rand();
	cout << "랜덤값 : " << random3 << endl;

	int random4 = rand();
	cout << "랜덤값 : " << random4 << endl;*/

	//랜덤값으로 실습
	//1. 0~3 사이의 랜덤숫자 뽑아보기
	//
	// 메이플 공격력(51~53)
	//51~53사이의 랜덤숫자 뽑기
	srand(time(NULL));
	int random = rand() % 3 + 51;
	cout << "51~53사이 랜덤값 : " << random  << endl;

}