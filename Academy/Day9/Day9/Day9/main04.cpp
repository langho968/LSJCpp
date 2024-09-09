#include <iostream>

using namespace std;

struct Monster
{
private:	// 나만 접근할 수 있게
public:		// 모두 접근할 수 있게
	int Hp;
	int Attack;
};

class CMonster
{
public:
	int Hp;
	int Attack;
};

void main()
{
	//클래스 -1
	//클래스가 무엇인가
	//클래스와 구조체는 98%동일(최소한 c++에서는)


	Monster a;
	a.Attack = 10;
	a.Hp = 20;

	CMonster b;
	b.Attack = 10;
	b.Hp = 20;

	//접근제어자가 기본적으로
	//구조체는 public
	//클래스는 private

	//c언어 - 절차지향
	//c++언어 - 객체지향

	//절차지향 프로그래밍
	//		- 코드는 위에서부터 아래로 흐른다.
	//		- 객체라는 개념이 없다

	//객체지향 프로그래밍
	//		- 우리가 월드를 만드는 것
	//		- Monster, Player, Camea, GameRule 등 객체를 만들어서
	//		- 객체들끼리 알아서 상호작용하는 코드를 짜는 방식을 객체지향 프로그래밍

	//		- 클래스를 많이써서 코드를 분할하자
}