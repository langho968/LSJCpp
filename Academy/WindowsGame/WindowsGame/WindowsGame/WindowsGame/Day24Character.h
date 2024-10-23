#pragma once
#include "GameObject.h"
class Day24Character : public GameObject
{
	DECLARE_CHILD(Day24Character, GameObject);

public:
	virtual void Init();
	virtual void Render(HDC hdc);
	virtual void Update();
	virtual void Release();

public:
	void Move(Vector2 dir);

private:
	float _speed = 300.0f;
};

