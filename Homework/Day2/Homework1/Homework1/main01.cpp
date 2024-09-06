#include <iostream>

using namespace std;

void main()
{
	float height;
	int weight;
	float bmi1;
	string bmi2;
	printf("키(cm)를 입력해주세요.");
	scanf_s("%f", &height);
	
	printf("몸무게(kg)를 입력해주세요.");
	scanf_s("%d", &weight);
	
	
	
	height = height / 100;
	
	bmi1 = weight / (height * height);
	
	printf("BMI 지수 : %.1f\n", bmi1);
	
	if (bmi1 <= 18.5 && bmi1 > 0)
	{
		bmi2 = "저체중";
	}
	else if (bmi1 <= 23 && bmi1 > 18.5)
	{
		bmi2 = "정상체중";
	}
	else if (bmi1 <= 25 && bmi1 > 23)
	{
		bmi2 = "과체중";
	}
	else if (bmi1 <= 30 && bmi1 > 25)
	{
		bmi2 = "비만";
	}
	else if (bmi1 > 30)
	{
		bmi2 = "무한대";
	}
	printf("%s입니다.", bmi2.c_str());
}