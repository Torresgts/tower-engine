#pragma once
#ifndef SPRITECOMPONENT_H
#define SPRITECOMPONENT_H
#include "ActorComponent.h"
#include "RendererComponent.h"
#include <string>
#include "../Core/Actor.h"
#endif

class SpriteComponent : public RendererComponent
{
public:
	SpriteComponent(Actor* owner, std::string SpritePath);

	void Start();
	void Update();
	void DrawUpdate() override;

	Actor* ownerActor;
	Texture2D SpriteTexture;
};

