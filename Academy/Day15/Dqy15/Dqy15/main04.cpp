#include <iostream>

using namespace std;

class Unit
{
private:
	float _moveSpeed;

public:
	float GetMoveSpeed() { return _moveSpeed; }
	void SetMoveSpeed(float moveSpeed) { _moveSpeed = moveSpeed; }
};

void main()
{
	// 객체지향 4가지 특징
	// 캡슐화
	//  - 변수를 private이나 protected로 보호해서
	//    아무나 접근못하게 하는 것
	//  - 캡슐화를 왜하냐면
	//    변수를 아무데서나 수정하면 그거는 객체가 아닙니다.

	// 객체가 무엇인지를 계속 생각을 해야하는데
	// 
	// 예를들어서 컴퓨터라는 객체가 있다고치면
	/*
	// 캡슐화가 수도코드의 첫걸음
	class Computer
	{
	private:
		Ram _ram;
		Power _power;
		Monitor _monitor;

	public:
		void Boot(); // 부팅이라는 기능아래에 ram이 활성화되고, power가 켜지고, monitor에 전기가들어갑니다.
		void Off();	//부팅반댓말.
	}

	class User
	{

	}
	*/


	// 어쩔수없이 변수를 접근해야하는 경우가 있거든요
	// 변수에 접근할수있게끔 만드는 방법
	//   Getter, Setter를 통해서 한다.
}