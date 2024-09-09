#include <iostream>
#include <Windows.h>

#define USER_COUNT 3

using namespace std;

void main()
{
	int a = 3;
	//동적할당
	
	new int();
	// 4바이트 int형 메모리가 생성됨
	// 그냥 RAM에 만들어진게 끝
	// new 자료형(); ==>기본적으로 포인터가 전달됨

	// 동적할당을 사용할때는 포인터와 같이 사용
	int* myPointer = new int();
	// new int() -> RAM에 4byte int형 메모리가 생성하였고
	// 그 주소를 myPointer가 인수받음

	// 1. 동적할당 하는법
	//	- new 자료형();
	//	- 주소값이 나오기때문에 항상 포인터로 받아줘야함
	//  - int* myPointer = new int();
	// 
	// 2. 동적할당 삭제하는 방법
	// - delete 주소값
	// - 주소값을 담은 포인터는 더이상 쓸못가 없으니 항상 nullptr로 초기화
	
	delete myPointer;
	myPointer = nullptr;
	// 
	//메모리 공간 4개
	//힙
	//	- 생성과 삭제를 프로그래머가 제어할 수 있음
	//스택 - 지역변수
	//	- 프로그래머가 삭제에 관여할 수 없음
	//	- 중괄호 끝나면 알아서 삭제됨

	// 동적배열
	// 프로그램이 실행되는 도중에, 배열크기를 지정해서 선언하는 방법;

	int userCount = 10;
	int arr[USER_COUNT]; //정적 배열


	//동적 배열
	//포인터 = 배열
	int* arr = new int[userCount];
	arr[0] = 3;
	arr[9] = 10;

	//동적배열 삭제하는 방법
	delete[] arr;
	

	//동적할당 주의점
	//항상 new를 했으면, delete를 해줘야함

	//delete를 하지 않으면 평생 메모리가 쌓임
	//-> 메모리 누수
}