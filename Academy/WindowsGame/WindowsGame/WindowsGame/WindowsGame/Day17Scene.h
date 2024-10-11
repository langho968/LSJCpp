#pragma once
#include "Scene.h"
class Day17Player;
class Day17Box;
class Day17Scene : public Scene
{
public:
	virtual void Init() override;
	virtual void Render(HDC hdc) override;
	virtual void Update() override;
	virtual void Release() override;

public:
	Day17Scene() {}
	virtual ~Day17Scene() {}

private:
	Day17Player* _player;
	Day17Box* _box;

};

