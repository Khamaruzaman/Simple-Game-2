#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class player
{
private:
	sf::RectangleShape shape;
	
	void initVariable();
	void initShape();
public:
	player();
	~player();

	void update();
	void render(sf::RenderTarget* target);

};

