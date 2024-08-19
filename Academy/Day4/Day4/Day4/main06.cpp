﻿#include <iostream>

using namespace std;

void main()
{
	//반복문
	//배열과 반복문은 뗴어놓을 수 없는 사이
	//반복문이 본체

	//반복문이란?
	//반복해서 동작을 할때, 유용하게 해주는 문법

	//ex)
	//몬스터를 100번 만나는게 룰이라면 코드양이 많이 길어짐

	//기본적인 반목문 사용법
	for (int i = 0; i < 10; i++)
	{
		cout << "i : " << i << endl;
	}

	//해석
	//for(int i=0; i<10; i++){}
	//for(선언식; 조건식; 증감문){실행 구문}

	//[선언문]
	//int i=0; << 이 반복문을 사용할 때, 
	//int i=0; 라는 변수를 선언에서 사용할 것이다.
	//for문이 시작할때 단 한번 실행됨.

	//[조건식]
	//i<10 << 조건식이 true면, 
	//실행구문을 실행하겠다.

	//[증감식]
	//실행구문을 완료하고, 실행시킬 간단한 증감식을 넣을 수 있는 공간
	//안적어도 무방

	//int i 라는 변수를 0으로 초기화해서 선언해주고
	//i 변수가 10보다 작으면 실행구문을 실행시킨다.
	//실행을 완료한후에 i++를 실행한 후 
	//i 변수가 10보다 작으면 실행구문을 실행시킨다.
	// 
	//실행을 완료한후에 i++를 실행한 후 
	//i 변수가 10보다 작으면 실행구문을 실행시킨다.
	// 
	//실행을 완료한후에 i++를 실행한 후 
	//i 변수가 10보다 작으면 실행구문을 실행시킨다.
	// 
	//실행을 완료한후에 i++를 실행한 후 
	//i 변수가 10보다 작으면 실행구문을 실행시킨다.

}