#pragma once
#include <iostream>
#include "raylib.h"
	
class ActorComponent
{
public:
	virtual void Start();
	virtual void Update();
};

