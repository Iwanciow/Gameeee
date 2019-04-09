#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "Player.h"
#include <iostream>

class Display
{
public:
	Display();
	~Display();


	void display();
	void PollEvent(sf::RenderWindow &window);


	std::shared_ptr<Player> player = std::make_shared<Player>();
	

	sf::RenderWindow Window;

};

