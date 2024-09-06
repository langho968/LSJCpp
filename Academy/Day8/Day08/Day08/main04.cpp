#include <iostream>

using namespace std;

//구조체는
//변수 + 함수들을 묶어놓는 기능

//1. 구조체 정의
struct Monster
{
	float hp;
	float attack;

	//this 자기자신을 가르킨다
	void PrintInfo(Monster otherMonster)
	{
		cout << "몬스터 HP : " << this->hp << endl;
		cout << "몬스터 attack : " << this->attack << endl;

		cout << "다른 몬스터 : " << endl;
		cout << "다른 몬스터 HP : " << otherMonster.hp << endl;
		cout << "다른 몬스터 attack : " << otherMonster.attack << endl;
	}

	void ChooseRockScissorPaper()
	{

	}
};

struct Player
{
	float hp;
	float attack;
};

void main()
{
	//2. 구조체
	
	//in, float, __int64, char, bool

	//기본자료형

	//사용자 정의 자료형

	//기본자료형
	//-> 언어에서 기본적으로 제공하는 자료형
	//	(정수, 실수, 문자열, 참거짓 등)

	//사용자 정의 자료형
	//->직접 자료형 만드는 것
	//	(enum, struct, class)

	//2. 구조체 초기화
	//Monster monster = {};
	//monster.hp = 10;
	//monster.attack = 20;

	//Monster monster2 = {};
	//monster2.hp = 30;
	//monster2.attack = 10;

	//monster.PrintInfo(monster2);

	//실습


}