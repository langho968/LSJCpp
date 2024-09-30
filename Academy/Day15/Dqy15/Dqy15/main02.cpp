#include <iostream>
using namespace std;

class Creature
{
private: // 나만 쓸수있다.
protected:	// 나 + 내자식들이 쓸수있다.
	string _displayName;
	float _moveSpeed;

public:	// 아무나 쓸수있다.
	void Move() {}
	void Interaction() {}
};


class Pet : public Creature
{
private:
	int _price;
	int _petId;

public:
	void Command() {
	}
};

class Npc : public Creature
{
private:
	int _npcId;
};

void main()
{
	// 클래스의 변수는 외부에서 수정못하게 막아줄겁니다.
	// 함수를 통해서만 수정할수있도록

	// 상속
	// 중요한데 좀 어려워요

	// 대학생들이 많이하는 실수
	// 상속구조를 이쁘게 만들겠다고

	// class Unit
	// class SCV : Unit
	// class Marin : Unit
	// class Tank : Unit

	// 저거는 좋은 상속구조가 아닙니다.
	// 마린이나, SCV나, Tank나 
	// 프로그래머 입장에서는 다 같은 unit이에요
	// 그리고 Type만 다른겁니다.
	// skillList 로, 미네랄캐기, 시즈모드돌입, 마인심기

	// 간단한 밸런스패치거나 간단한 유닛추가인데 프로그래머가 항상 참여를 해야해요.

	// 게임개발에서 가장 이상적인 형태는
	// 프로그래머는 그 게임이 뭔지 잘모르는 형태입니다.

	// 데이터로 게임이 돌아가게끔 만들어지는게 가장 좋은 형태입니다.

	// 메이플 개발자라고 치면
	// 신규월드에 신규 몬스터들이 생기는데
	// 슬라임이랑 크게 다를게없어요
	// 이미지만 살짝 바뀌고 체력만 살짝바뀌고 이름만 살짝바뀐
	// 작업이 기획자도 작업해야하고 프로그래머도 작업해야하고 디자이너도 작업해야합니다.
	// 잘만든 엑셀시트 하나면 알아서 동작하도록 만들어주는게 생산성이 가장 좋아요.

	// 데이터 + 로직 형태의 프로그램으로 만드는게 가장 이상적입니다.

}