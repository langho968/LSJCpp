#include "pch.h"
#include "Day18HomeworkScene.h"

void Day18HomeworkScene::Init()
{
}
void Day18HomeworkScene::Render(HDC hdc)
{
	//씬 이름 출력
	{
		wstring nameStr = ::format(L"Day18HomeworkScene");
		Draw::Text(hdc, 0, 20, nameStr);
	}
}
void Day18HomeworkScene::Update()
{

}
void Day18HomeworkScene::Release()
{

}