#pragma once
#include "Actor.h"
#include <iostream>
#include <vector>
#include "raylib.h"

#define MAX_FPS 60

static std::vector<Actor*> actors;

class System
{
public:
	System();
	
	//Actor
	void InitializeActors();
	void TickActorComponents();
	static void SpawnActor(Actor* actor);

	//Input
	void HandleInput();

	//Draw
	void UpdateRendererComponentsDraw();

private:


};

