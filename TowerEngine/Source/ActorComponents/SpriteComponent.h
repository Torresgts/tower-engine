#pragma once
#include "ActorComponent.h"
#include "RendererComponent.h"
#include <string>

class SpriteComponent : public RendererComponent
{
public:
	SpriteComponent(std::string SpritePath);

	void Start();
	void Update();
	void DrawUpdate() override;

	Texture2D SpriteTexture;
};

