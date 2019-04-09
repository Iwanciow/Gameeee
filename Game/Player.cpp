#include "pch.h"
#include "Player.h"
#include"Const.h"


Player::Player() :shape(sf::Vector2f(80.f,80.f))
{
	Tplayer.loadFromFile("player.jpg");
	shape.setTexture(&Tplayer);
	shape.setPosition(200.f, 300.f);

}


Player::~Player()
{
}

void Player::Draw(sf::RenderWindow &Window)
{

	Window.draw(shape);
}

void Player::Control()
{
	bool moving = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && shape.getPosition().x > 1)
	{
		speed += {-0.3f, 0.f};
		if (speed.x < -5.f)
		{
			speed.x = -3.f;
		}
		moving = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && shape.getPosition().x + shape.getSize().x < RESOLUTION_X)
	{
		speed += {0.3f, 0.f};

		if (speed.x > 3.f)
		{
			speed.x = 3.f;
		}
		moving = true;
	}

	

	if (!moving) {
		if (speed.x < -1)
			speed.x += 1.0f;
		else if (speed.x > 1)
			speed.x -= 1.f;
		else
			speed.x = 0.f;
		 if (speed.y > 1)
		speed.y -= 1.f;
		 else if (speed.y < -1)
			 speed.y -= 1.f;
		moving = false;
	}
	
	Gravitation();

	shape.move(speed);
}

void Player::Gravitation()
{
	if(shape.getPosition().y + shape.getSize().y < RESOLUTION_Y)
	speed += {0.f, 0.5f};

	if (speed.y > 10.f)
	{
		speed.y = 10.f;
	}

	if (shape.getPosition().y + shape.getSize().y >= RESOLUTION_Y)
	{
		speed.y = 0;
	}

}


