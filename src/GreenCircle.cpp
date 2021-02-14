#include "GreenCircle.h"
#include <iostream>

GreenCircle::GreenCircle(int radius, int xPosition, int yPosition)
{
	this->radius = radius;
	this->xPosition = xPosition;
	this->yPosition = yPosition;

	color = sf::Color::Green;

	shape = new sf::CircleShape(100.f);
	rect = new sf::RectangleShape(sf::Vector2f(100,100));

}

void GreenCircle::draw(sf::RenderWindow& window)
{
	shape->setFillColor(color);

	window.draw(*shape);
	window.draw(*rect);

}

bool GreenCircle::checkCollision(int x, int y)
{
	bool collide = false;
	

	sf::IntRect* r = new sf::IntRect(rect->getPosition().x,rect->getPosition().y,rect->getSize().x, rect->getSize().y);


	collide = r->contains(x,y); 
	return collide;	
}
