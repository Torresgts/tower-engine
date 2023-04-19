#include "Actor.h"
#include <iostream>

Actor::Actor()
{
	transformComponent = new TransformComponent();
}

void Actor::StartComponents()
{
	for (int i = 0; i != actorComponents.size(); i++)
	{
		actorComponents[i]->Start();
	}
}

void Actor::UpdateComponents()
{
	for (int i = 0; i != actorComponents.size(); i++)
	{
		actorComponents[i]->Update();
	}
}

ActorComponent* Actor::AddActorComponent(ActorComponent* actorComponent)
{
	actorComponents.push_back(actorComponent);
	return actorComponent;
}

std::vector<ActorComponent*> Actor::GetAllActorComponents()
{
	return actorComponents;
}

std::vector<RendererComponent*> Actor::GetAllRendererComponents()
{
	std::vector<RendererComponent*> rendererComponents;

	for (int i = 0; i != actorComponents.size(); i++)
	{
		if (RendererComponent* rendererComp = dynamic_cast<RendererComponent*>(actorComponents[i]))
		{
			rendererComponents.push_back(rendererComp);
		}
	}

	return rendererComponents;
}

