// SampleGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Engine.h>

#include "MainScene.h"

int main(int args, char* argc[])
{
	using namespace Core;

	Engine e(new MainScene());


	if (e.init() == 0)
	{
		
		return e.run();
	} 

	return -1;
}