#include "pch.h"
#include "Day17Scene.h"
#include "Day17Player.h"
#include "Day17Box.h"

void Day17Scene::Init()
{
	_player = new Day17Player();
	_player->Init();

	_box = new Day17Box();
	_box->Init();


	_player->SetLinkBox(_box);
}
void Day17Scene::Render(HDC hdc)
{
	//씬 이름 출력
	{
		wstring nameStr = ::format(L"Day17Scene");
		Draw::Text(hdc, 0, 20, nameStr);
	}

	_player->Render(hdc);
	_box->Render(hdc);
}
void Day17Scene::Update()
{
	_player->Update();
	_box->Update();

	if (Input->GetKeyDown(KeyCode::Space))
	{
		GET_SINGLE(SceneManager)->ChangeScene(SceneType::Day18Scene);
	}
}
void Day17Scene::Release()
{
}
