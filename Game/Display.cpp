#include "pch.h"
#include "Display.h"
#include "Player.h"
#include <memory>
#include "Const.h"

Display::Display(): Window(sf::VideoMode(RESOLUTION_X, RESOLUTION_Y), "Game!") //Create window
{
	
}


Display::~Display()
{
}

//Display in the window
void Display::display()
{
	

	



	
	while (Window.isOpen())
	{
		
		PollEvent(Window);
		player->Control();
		
		Window.clear(sf::Color::Green);
		player->Draw(Window);
		

		Window.display();
	}

}

//Checking events
void Display::PollEvent(sf::RenderWindow &window)
{
	sf::Event event;
	
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();

	}
}

