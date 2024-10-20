#include "Game.h"

void Game::initVariables()
{
	this->endGame = false;
}

void Game::initWindow()
{
	this->videoMode = sf::VideoMode(800, 600);
	this->window = new sf::RenderWindow(this->videoMode, "Game2", sf::Style::Close | sf::Style::Titlebar);
}

const bool Game::isRunning() const
{
	return this->window->isOpen();
}

void Game::pollEvents()
{
	while (this->window->pollEvent(this->sfmlEvent))
	{
		switch (this->sfmlEvent.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;

		case sf::Event::KeyPressed:
			if (this->sfmlEvent.key.code == sf::Keyboard::Escape)
			{
				this->window->close();
			}
			break;

		default:
			break;
		}
	}
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::update()
{
	this->pollEvents();
}

void Game::render()
{
	this->window->clear();

	// render
	this->plr.render(this->window);

	this->window->display();
}
