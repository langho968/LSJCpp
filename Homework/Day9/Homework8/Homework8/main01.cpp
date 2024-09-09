#include <iostream>
#include "MainGame01.h"
using namespace std;

void main()
{
	MainGame01* mainGame01 = new MainGame01();
	mainGame01->Init();

	while (mainGame01->isGameEnd == false)
	{
		mainGame01->Run();
	}
	

	delete mainGame01;
	mainGame01 = nullptr;
}