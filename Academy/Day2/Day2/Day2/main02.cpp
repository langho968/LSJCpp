#include <iostream>

using namespace std;

void main()
{
	// 입력 : scanf_s 라는 함수를 통해서 진행
	// 사용법 : scanf_s("%d", &변수명);
	//=> 변수안에 사용자가 입력한 값이 들어갑니다.

	int year = 0;
	printf("태어난 년도를 입력해주세요 : ");
	scanf_s("%d", &year);
	

	char name[100] = "";
	printf("이름을 입력해주세요 : ");
	scanf_s("%s", name, (int)sizeof(name));
	
	printf("제 이름은 %s 입니다.\n", name);
	printf("저는 %d년생 입니다.\n", year);

}