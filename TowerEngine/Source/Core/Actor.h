#pragma once
#ifndef ACTOR_H
#define ACTOR_H
#include <vector>
#include <iostream>
#include "../ActorComponents/ActorComponent.h"
#include "../ActorComponents/SpriteComponent.h"
#include "../ActorComponents/TransformComponent.h"
#endif

class Actor
{
public:
	Actor();
	void StartComponents();
	void UpdateComponents();

	ActorComponent* AddActorComponent(ActorComponent* actorComponent);
	std::vector<ActorComponent*> GetAllActorComponents();
	std::vector<RendererComponent*> GetAllRendererComponents();

	TransformComponent* transformComponent;

private:
	std::vector<ActorComponent*> actorComponents;
};

