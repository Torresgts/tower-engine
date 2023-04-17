#include "SpriteComponent.h"

SpriteComponent::SpriteComponent(std::string SpritePath)
{
	//Load Texture
	SpriteTexture = LoadTexture(SpritePath.c_str());
	
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
	DrawTexture(SpriteTexture, 100, 100, WHITE);
}
