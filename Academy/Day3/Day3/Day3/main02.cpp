#include <iostream>

using namespace std;

void main()
{
	//1. 숙제 풀이
	printf("키(m)를 입력해주세요.\n");

	float height = 0;
	scanf_s("%f", &height);

	printf("몸무게(kg)을 입력해주세요.\n");

	float weight = 0;
	scanf_s("%f", &weight);

	float bmi = weight / (height * height);

	printf("BMI 지수 : [%f]\n", bmi); 


	if (0 < bmi && bmi < 18.5)
	{
		printf("저체중입니다.\n");
	}
	else if (bmi <= 23)
	{
		printf("정상체중입니다.\n");
	}
	else if (bmi <= 25)
	{
		printf("과체중입니다.\n");
	}
	else if (bmi <= 30)
	{
		printf("비만입니다.\n");
	}
}