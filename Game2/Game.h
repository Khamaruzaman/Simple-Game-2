#pragma once
#include "player.h";

class Game
{
private:
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	bool endGame;
	sf::Event sfmlEvent;

	player plr;

	void initVariables();
	void initWindow();



public:
	Game();
	~Game();

	const bool isRunning() const;
	void pollEvents();

	void update();
	void render();

};