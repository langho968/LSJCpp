#include "pch.h"
#include "Day24Character.h"

void Day24Character::Init()
{
	Super::Init();
}
void Day24Character::Render(HDC hdc)
{
	Super::Render(hdc);
}
void Day24Character::Update()
{
	Super::Update();


	if (Input->GetKey(KeyCode::W))
	{
		this->Move(Vector2::Up());
	}
	if (Input->GetKey(KeyCode::A))
	{
		this->Move(Vector2::Left());
	}
	if (Input->GetKey(KeyCode::S))
	{
		this->Move(Vector2::Down());
	}
	if (Input->GetKey(KeyCode::D))
	{
		this->Move(Vector2::Right());
	}
}
void Day24Character::Release()
{
	Super::Release();
}

void Day24Character::Move(Vector2 dir)
{
	this->_body.pos += dir * _speed * Time->GetDeltaTime();
	this->_body.pos.x = clamp(this->_body.pos.x, this->GetWidth() / 2, WIN_SIZE_X - this->GetWidth() / 2);
}