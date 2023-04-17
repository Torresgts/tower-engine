#pragma once
#include "ActorComponent.h"

class RendererComponent : public ActorComponent
{
public:
	RendererComponent();
	void Start();
	void Update();

	//Main Function responsible for drawing components
	virtual void DrawUpdate();

};

