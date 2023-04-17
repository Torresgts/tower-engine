#pragma once
#include <vector>
#include <iostream>
#include "../ActorComponents/ActorComponent.h"
#include "../ActorComponents/SpriteComponent.h"


class Actor
{
public:
	Actor();
	void StartComponents();
	void UpdateComponents();

	ActorComponent* AddActorComponent(ActorComponent* actorComponent);
	std::vector<ActorComponent*> GetAllActorComponents();
	std::vector<RendererComponent*> GetAllRendererComponents();


private:
	std::vector<ActorComponent*> actorComponents;
};

