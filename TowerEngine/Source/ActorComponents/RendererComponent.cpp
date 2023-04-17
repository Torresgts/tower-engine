#include "RendererComponent.h"

RendererComponent::RendererComponent()
{
}

void RendererComponent::Start()
{
	ActorComponent::Start();
}

void RendererComponent::Update()
{
	//SHOULD HAVE NOTHING HERE
	//UPDATE USED ONLY FOR GAME LOGIC
	ActorComponent::Update();
}

void RendererComponent::DrawUpdate()
{
	//std::cout << "RENDERER DRAW UPDATE" << std::endl;
}
