#include "pch.h"
#include "SceneManager.h"
#include "Scene.h"
#include "DevScene.h"
#include "Day17Scene.h"
#include "Day18Scene.h"
#include "Day18HomeworkScene.h"
void SceneManager::Init()
{

}

void SceneManager::Render(HDC hdc)
{
	if (_scene)
	{
		_scene->Render(hdc);
	}
}

void SceneManager::Update()
{
	if (_scene)
	{
		_scene->Update();
	}

	if (_nextSceneType == SceneType::None)
	{
		return;
	}

//==========================================
//	## Change Scene Logic ##
//==========================================

	if (_scene)
	{
		_scene->Release();
	}

	Scene* newScene = this->CreateScene(_nextSceneType);

	if (_scene)
	{
		delete _scene;
		_scene = nullptr;
	}
	_scene = newScene;
	_sceneType = _nextSceneType;
	_nextSceneType = SceneType::None;

	newScene->Init();
}

void SceneManager::Release()
{

}

Scene* SceneManager::CreateScene(SceneType sceneType)
{
	Scene* scene = nullptr;

	switch (sceneType)
	{
	case SceneType::None:
		break;
	case SceneType::DevScene:
		scene = new DevScene();
		break;
	case SceneType::Day17Scene:
		scene = new Day17Scene();
		break;
	case SceneType::Day18Scene:
		scene = new Day18Scene();
		break;
	case SceneType::Day18HomeworkScene:
		scene = new Day18HomeworkScene();
	default:
		break;
	}
	return scene;
}

void SceneManager::ChangeScene(SceneType sceneType)
{
	if (_sceneType == sceneType)
	{
		return;
	}
	_nextSceneType = sceneType;
}