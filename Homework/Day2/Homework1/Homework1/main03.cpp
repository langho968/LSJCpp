#include <iostream>

using namespace std;

void main()
{
	int num;
	int num2;

	printf("숫자를 입력해주세요.");
	scanf_s("%d", &num);
	
	num2 = num % 2;
	if (num2 == 0)
	{
		printf("%d는 짝수입니다.", num);
	}
	else if(num2 !=0)
	{
		printf("%d는 홀수입니다.", num);
	}
}