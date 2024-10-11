#include "pch.h"
#include "Day18Scene.h"

void Day18Scene::Init()
{
}
void Day18Scene::Render(HDC hdc)
{
	//씬 이름 출력
	{
		wstring nameStr = ::format(L"Day18Scene");
		Draw::Text(hdc, 0, 20, nameStr);
	}
}
void Day18Scene::Update()
{
	if (Input->GetKeyDown(KeyCode::Space))
	{
		GET_SINGLE(SceneManager)->ChangeScene(SceneType::Day18HomeworkScene);
	}
}
void Day18Scene::Release()
{

}