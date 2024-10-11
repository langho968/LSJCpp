#include "pch.h"
#include "Scene.h"
#include "Day17Player.h"
#include "Day17Box.h"

void Scene::Init()
{

}
void Scene::Render(HDC hdc)
{
	{
		wstring nameStr = ::format(L"CurrentScene");
		Draw::Text(hdc, 0, 20, nameStr);
	}

}
void Scene::Update()
{

}
void Scene::Release()
{

}