#include <iostream>

using namespace std;

void main()
{
	//printf("제 이름은 이승재입니다.\n");
	//printf("저는 01년생 입니다.\n");


	int year = 01;
	char name[100] = "이승재";

	//printf("year : %d\n", year);
	//printf("name : %s\n", name);

	//printf("year : %d, name : %s", year, name);

	char introduce[100] = "제 이름은 이승재입니다.";
	char introduce2[100] = "저는 01년생 입니다.";
	char introduce3[100] = "저는 취업을 목표로 수업을 듣고 있습니다.";
	char introduce4[100] = "저는 대학을 아직 졸업하지 않았습니다.";
	char introduce5[100] = "저는 게임 클라 프로그래밍을 목표로 생각하고 있습니다.";
	
	printf("%s\n%s\n%s\n%s\n%s\n", introduce, introduce2, introduce3, introduce4, introduce5);

	int month = 8;
	int day = 12;
	float luck = 80.3;

	printf("오늘은 %d월 %d일 입니다.\n", month, day);
	printf("오늘의 운세는 %.1f점입니다.\n", luck);


}