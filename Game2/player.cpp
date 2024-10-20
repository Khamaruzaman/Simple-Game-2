#include "player.h"

void player::initVariable()
{
}

void player::initShape()
{
	this->shape.setFillColor(sf::Color::Red);
	this->shape.setSize(sf::Vector2f(100.f, 100.f));
}

player::player()
{
	this->initVariable();
	this->initShape();
}

player::~player()
{
}

void player::update()
{
}

void player::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
