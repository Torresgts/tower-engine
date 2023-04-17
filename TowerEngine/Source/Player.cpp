#include "Player.h"

Player::Player()
{
	AddActorComponent(new SpriteComponent("././Images/monkey.png"));
	//AddActorComponent(new RendererComponent());
	//AddActorComponent(new ActorComponent());
}
