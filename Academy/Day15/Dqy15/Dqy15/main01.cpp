#include <iostream>
using namespace std;

class Animal
{
public:
	int aa;
	int bb;
};

void main()
{
	// 캐스팅 3대장

	// warning C4244: '초기화 중': 'float'에서 'int'(으)로 변환하면서 
	//					데이터가 손실될 수 있습니다.
	float a = 3.3;
	Animal* animal;
	int b = (int)a;	// 3.3 => 3 

	// C형식의 캐스팅
	// 그렇다고해서 저형식을 아예안쓰냐? 라고하면
	// 현업에서도 귀찮으면 많이써요

	int* c = new int();
	animal = (Animal*)c;

	printf("animal.aa : %d\n", animal->aa);
	printf("animal.bb : %d\n", animal->bb);

	//C형식의 캐스팅은 많이 위험합니다.

	// 지금부터 배우는 캐스팅형식으로 많이 사용합니다.

	// 1. static_cast
	int intVariable = 3;
	float floatVariable = 5.3f;

	int newValue = intVariable + static_cast<int>(floatVariable);
	// int newValue = intVariable + (int)floatVariable;

	// static_cast
	//  불가능한 캐스팅은 애초에 에러띄워버립니다.

	// 2. dynamic_cast
	// 나중에 클래스 상속배우고 다시 한번더 배울거에요.

	// 클래스끼리 무언가 관계가 있을때
	// 클래스 자료형끼리 변환을 자유롭게 해주는 캐스팅 방식입니다.

	// 3. reinterpret_cast
	// 위험한 캐스팅방식
	// 메모리구조 그대로 변형해서 캐스팅하는 방식
	// 보편적인 방식에서는 사용안해요.
	// MSDN에서 제공해준다거나 하는 경우가 있어서 사용합니다.

}