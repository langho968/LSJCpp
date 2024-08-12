#include <iostream>

using namespace std;

void main()
{
	int num1 = 0;
	int num2 = 0;
	int choice = 0;
	float sum = 0;

	printf("숫자 1을 입력해주세요 : ");
	scanf_s("%d", &num1);

	
	printf("숫자 2을 입력해주세요 : ");
	scanf_s("%d", &num2);

	
	printf("어떤 연산을 진행할까요? (1:+, 2:-, 3:*, 4:/)");
	scanf_s("%d", &choice);

	printf("입력값 확인용 : num1(%d), num2(%d), choice(%d)\n", num1, num2, choice);
	
	if (choice == 1)
	{	
		sum = num1 + num2;
		printf("결과 : %f", sum);
	}
	else if (choice == 2)
	{
		sum = num1 - num2;
		printf("결과 : %f", sum);
	}
	else if (choice == 3)
	{
		sum = num1 * num2;
		printf("결과 : %f", sum);

	}
	else if (choice == 4)
	{
		sum = num1 / num2;
		printf("결과 : %.1f", sum);
	}

	
}