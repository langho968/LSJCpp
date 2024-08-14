#include <iostream>

using namespace std;

void main()
{
	//연산자
	//대입연산자, 비교연산자, 산술연사낮, 논리연산자, 증감연산자, 비트연산자


	//증감연산자
	int number1 = 7;
	//number1여기에 3을 더하려면
	number1 = number1 + 3;
	number1 = number1 - 3;

	number1 = number1 + 3;
	number1 += 3;

	number1 -= 3;
	number1 *= 3;
	number1 /= 3;
	number1 %= 3;

	number1++; //1 더하기
	number1--; //1 빼기
	++number1; //1 더하기
	--number1; //1 빼기

	int num1 = 0;
	printf("\n%d\n", num1++);


	int num2 = 0;
	printf("\n%d\n", ++num2);

	//논리연산자
	//&& ||
	//and -> &&
	//or  -> ||

	int hp = 100;
	bool haveResurrection = true;

	if (hp <= 0 && haveResurrection)
	{
		printf("부활한다\n");
	}

	if (hp <= 0)
	{
		if (haveResurrection)
		{
			printf("부활한다\n");
		}
	}

	bool InputQkey = true;
	int mp = 100;
	if (InputQkey)
	{
		if (100 < mp)
		{
			printf("Q스킬을 발동한다.\n");
		}
	}

	// && 연산은  앞에서부터 false가 나오면 그만둠
	// || 연산은 앞에서부터 true가 나오면 바로 중괄호 진입합니다.

	int zero = 0;

	if (false && (1 / zero) == 3)
	{
		printf("안들어오고 뻑도안남\n");
	}
	if (true || (1 / zero) == 3)
	{
		printf("들어오고 뻑도안남\n");
	}
}