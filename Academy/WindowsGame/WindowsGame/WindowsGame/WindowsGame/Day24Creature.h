﻿#pragma once
#include "GameObject.h"

enum class Day24CreatureState
{
	Idle,
	Move
};

enum class Day24CreatureDir
{
	Up,
	Left,
	Right,
	Down,
};

class FlipbookRenderer;
class Day24Creature : public GameObject
{
	DECLARE_CHILD(Day24Creature, GameObject);

public:
	virtual void Init();
	virtual void Render(HDC hdc);
	virtual void Update();
	virtual void Release();

public:
	void Update_Idle();
	void Update_Move();

public:
	void Shoot(Vector2 dir);

public:
	void SetState(Day24CreatureState state);
	void SetDir(Day24CreatureDir dir);

	void SetFlipbook();

private:
	float _speed = 100.0f;
	Day24CreatureState _state = Day24CreatureState::Idle;
	Day24CreatureDir _dir = Day24CreatureDir::Down;
	FlipbookRenderer* _flipbookRenderer = nullptr;
};

