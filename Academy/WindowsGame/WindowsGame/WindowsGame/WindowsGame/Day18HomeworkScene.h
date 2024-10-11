#pragma once
#include "Scene.h"
class Day18HomeworkScene : public Scene
{
public:
	virtual void Init() override;
	virtual void Render(HDC hdc) override;
	virtual void Update() override;
	virtual void Release() override;
};

