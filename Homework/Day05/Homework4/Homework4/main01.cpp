#include <iostream>

using namespace std;

int totalNum[10] = {};
int comNum[4] = {};
int playerNum[4] = {};
int strikePoint;
int ballPoint;
int tryCount = 9;


//야구 게임

//정담 숫자 4자리 정하기
void SelectComNumber()
{
	//totalNum 초기화
	for (int i = 0; i < 10; i++)
	{
		totalNum[i] = i;
	}

	//totalNum 섞기
	for (int i = 0; i < 100000; i++)
	{
		int idx1 = rand() % 10;
		int idx2 = rand() % 10;

		int temp = totalNum[idx1];
		totalNum[idx1] = totalNum[idx2];
		totalNum[idx2] = temp;
	}

	//정답 숫자 4자리 정하기
	for (int i = 0; i < 4; i++)
	{
		comNum[i] = totalNum[i];
		//첫째 자리가 0인지 확인
		//0일 시 다른 숫자 넣기
		if (i == 0 && comNum[i] == 0)
		{
			comNum[i] = totalNum[i + 4];
		}
		printf("%d", comNum[i]);
	}

}

//플레이어 선택 확인
void CheckAnswer()
{
	//스트라이크 및 볼 체크
	for (int i = 0; i < 4; i++)
	{
		if (comNum[i] == playerNum[i])
		{
			strikePoint++;
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				if (comNum[i] == playerNum[j])
				{
					ballPoint++;
				}

			}
		}
	}
	printf("스트라이크 : %d, 볼 : %d\n", strikePoint, ballPoint);
	tryCount--;

	//4 스트라이크 시 게임 종료
	if (strikePoint == 4)
	{
		printf("4자리 숫자를 맞추는데 성공하셨습니다.");
		exit(0);
	}

	//스트라이크 및 볼 포인트 초기화
	strikePoint = 0;
	ballPoint = 0;
}


void main()
{
	srand(time(NULL));

	//컴퓨터가 랜덤 4개의 숫자를 선택 9999~1000
	SelectComNumber();



	//게임 시작 및 시도 횟수 확인
	while (tryCount > 0)
	{
		//게임시작, 횟수 카운팅, 숫자 입력
		printf("숫자 4자리를 입력해 주세요. %d회 시도 가능합니다.\n", tryCount);
		for (int i = 0; i < 4; i++)
		{
			scanf_s("%d", &playerNum[i]);
		}

		//스트라이크, 볼 개수 체크
		CheckAnswer();

	}

	//숫자 맞추기 실패 시 정답 공개
	printf("숫자를 맞추는데 실패하였습니다. 정답은 [%d%d%d%d]이였습니다.",
		comNum[0], comNum[1], comNum[2], comNum[3]);
}