#include "Player.h"


Player::Player()
{
	AddActorComponent(new SpriteComponent(this, "././Images/monkey.png"));
	input = static_cast<InputComponent*>(AddActorComponent(new InputComponent(this)));
}
