#include "pch.h"
#include "Day24Scene.h"
#include "Day24Character.h"
#include "GameObject.h"
#include "Texture.h"
#include "Sprite.h"
#include "SpriteRenderer.h"
void Day24Scene::Init()
{
	Super::Init();
	{
		Texture* texture = Resource->LoadTexture(L"T_Paddle", L"Day21/paddle.bmp");
		Resource->CreateSprite(L"S_Paddle", texture);
	}
	
	Day24Character* gameObject = new Day24Character();
	gameObject->Init();
	gameObject->SetBody(CenterRect(WIN_SIZE_X / 2, WIN_SIZE_Y / 2, 60, 60));
	{
		SpriteRenderer* component = new SpriteRenderer();
		SpriteRendererInfo info;
		info.SpriteKey = L"S_Paddle";
		component->SetInfo(info);
		gameObject->AddComponent(component);
	}
	_character = gameObject;
	this->SpawnGameObject(gameObject);
}
void Day24Scene::Render(HDC hdc)
{
	Super::Render(hdc);

	//씬 이름 출력
	{
		wstring nameStr = ::format(L"Day24Scene");
		Draw::Text(hdc, 0, 20, nameStr);
	}
	
}
void Day24Scene::Update()
{
	Super::Update();
}
void Day24Scene::Release()
{
	Super::Release();
}