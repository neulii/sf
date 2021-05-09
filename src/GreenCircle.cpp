#include "GreenCircle.h"
#include <iostream>
#include <math.h>

GreenCircle::GreenCircle(int radius, int xPosition, int yPosition)
{
	this->radius = radius;
	this->xPosition = xPosition;
	this->yPosition = yPosition;

	color = sf::Color::Green;

	shape = new sf::CircleShape();
	shape->setRadius(radius);
	shape->setFillColor(sf::Color::Green);

	shape->setPosition(xPosition,yPosition);

	//rect = new sf::RectangleShape(sf::Vector2f(100,100));

}

void GreenCircle::draw(sf::RenderWindow& window)
{
	//shape->setFillColor(color);

	window.draw(*shape);
	//window.draw(*rect);

}

bool GreenCircle::checkCollision(int x, int y)
{
	bool collide = false;
		

	//sf::IntRect* r = new sf::IntRect(rect->getPosition().x,rect->getPosition().y,rect->getSize().x, rect->getSize().y);


//	collide = r->contains(x,y); 
	
	float xRel = x-shape->getPosition().x - radius;
	float yRel = y-shape->getPosition().y - radius;

	if(sqrt(xRel*xRel+yRel*yRel)<radius)
	{
		//is in circle
		std::cout << "clicked in circle" << std::endl;
		collide = true;

	}

//	std::cout << xRel << "/" << yRel << std::endl;
	return collide;	
}

void GreenCircle::switchColor()
{
	std::cout << "switch color" << std::endl;


	if(shape->getFillColor()==sf::Color::Green)
		shape->setFillColor(sf::Color::Red);
	
	else(shape->setFillColor(sf::Color::Green));
}

void GreenCircle::switchColor(sf::Color color)
{
	shape->setFillColor(color);
}
