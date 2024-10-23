#pragma once
#include "Scene.h"
class Day24Character;
class Day24Scene : public Scene
{
	DECLARE_CHILD(Day24Scene, Scene);

public:
	virtual void Init() override;
	virtual void Render(HDC hdc) override;
	virtual void Update() override;
	virtual void Release() override;
private:
	Day24Character* _character = nullptr;

};

