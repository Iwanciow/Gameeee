#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:

	Player();
	~Player();

	void Draw(sf::RenderWindow &window);
	void Control();
	void Gravitation();

	sf::RectangleShape shape;
	sf::Vector2f speed;
	sf::Texture Tplayer;

};

