#pragma once
#ifndef RENDERERCOMPONENT_H
#define RENDERERCOMPONENT_H
#include "ActorComponent.h"
#endif

class RendererComponent : public ActorComponent
{
public:
	RendererComponent(Actor* owner);
	void Start();
	void Update();

	//Main Function responsible for drawing components
	virtual void DrawUpdate();

};

