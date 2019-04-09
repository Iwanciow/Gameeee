// Game.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include "Display.h"

int main()
{
	std::unique_ptr<Display> game(new Display());

	game->display();


	return 0;
}