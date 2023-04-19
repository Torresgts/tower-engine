#include "SpriteComponent.h"

//SpriteComponent::SpriteComponent(int test, std::string SpritePath) :RendererComponent(test)
//{
//	//Load Texture
//	SpriteTexture = LoadTexture(SpritePath.c_str());
//}

SpriteComponent::SpriteComponent(Actor* owner, std::string SpritePath) : RendererComponent(owner)
{
	//Load Texture
	SpriteTexture = LoadTexture(SpritePath.c_str());
	ownerActor = owner;
}

void SpriteComponent::Start()
{
	RendererComponent::Start();
}

void SpriteComponent::Update()
{
	RendererComponent::Update();
}

void SpriteComponent::DrawUpdate()
{
	RendererComponent::DrawUpdate();

	//Draw Texture
	DrawTexture
	(
		SpriteTexture, 
		ownerActor->transformComponent->Location.x,
		ownerActor->transformComponent->Location.y,
		WHITE
	);
}
