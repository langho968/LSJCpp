#include <iostream>

using namespace std;

class Parent
{
public:
	//생성자
	Parent()
	{
		printf("Parent 생성자 호출\n");
	}

	Parent(int a)
	{
		printf("Parent 생성자 호출 : {%d}\n", a);
	}

	//소멸자
	~Parent()
	{
		printf("Parent 소멸자 호출\n");
	}
};

//상속관계에 있어서 생성자와 소멸자
class Child : public Parent
{
public:
	Child()
	{
		printf("Child 생성자 호출\n");
	}

	Child(int b) : Parent(b)
	{
		printf("Child 생성자 호출 : {%d}\n", b);
	}

	~Child()
	{
		printf("Child 소멸자 호출\n");
	}
};

void main()
{
	// 클래스 이론
	// 클래스-01
	// 생성자와 소멸자 대해서 말했을텐데

	// 생성자는 객체를 생성할때 딱한번만 호출되는 함수
	// 소멸자는 객체가 소멸될떄 딱한번만 호출되는 함수


	Child* child = new Child(10);
	delete child;

	// 생성자와 소멸자가 어떻게 호출되는지 볼게요.

}