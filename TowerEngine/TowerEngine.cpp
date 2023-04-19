// TowerEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "raylib.h"
#include "Source/Core/System.h"
#include "Source/Player.h"

int main()
{
	System* system = new System();

	Actor* player = system->SpawnActor(new Player());
	
	//InitializeActors should be right before game loop to work as the start of every actor and system
	//Probably itsn`t the better approach, but should work for now
	//Game logic should not be exactly here
	system->InitializeActors();

	while (!WindowShouldClose())
	{
		system->HandleInput();

		//Game Logic
		system->TickActorComponents();

		//Drawing should be the last thing to do in the frame
		system->UpdateRendererComponentsDraw();
	}
}