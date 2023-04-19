#pragma once
#ifndef ACTORCOMPONENT_H
#define ACTORCOMPONENT_H
#include <iostream>
#include "raylib.h"
#endif

class Actor;

class ActorComponent
{
public:
	ActorComponent(Actor* owner);
	virtual void Start();
	virtual void Update();
};

