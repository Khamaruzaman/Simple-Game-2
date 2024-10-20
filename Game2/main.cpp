#include "Game.h"
#include <iostream>

int main()
{
	// initialize rand seed
	srand(static_cast<unsigned>(time(nullptr)));

	Game game;

	// Game loop
	while (game.isRunning())
	{
		game.update();
		game.render();
	}

	return 0;
}