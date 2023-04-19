#pragma once
#include "Core/Actor.h"
#include "ActorComponents/InputComponent.h"

class Player : public Actor
{
public:
	Player();

private:
	InputComponent* input;
};

