#include <SFML/Graphics.hpp>
#include <iostream>
#include "GreenCircle.h"

int main()
{
	double n = 1;
	bool active = false;


	GreenCircle green(200,50,100);
	
	sf::RenderWindow window(sf::VideoMode(800,500),"SFML works");
	sf::CircleShape shape(100.f);

	shape.setFillColor(sf::Color::Green);


	while(window.isOpen())
	{
		//check keyboard left
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			std::cout << n  << std::endl;
			n++;

		}

/*
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << "fire" << std::endl;
		}

*/
		sf::Event event;

		while(window.pollEvent(event))
		{
			if(event.type ==sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Right)
				{
					if(green.checkCollision(event.mouseButton.x, event.mouseButton.y))
						green.switchColor(sf::Color::Blue);
					else
						green.switchColor(sf::Color::Red);

				}
				else if (event.mouseButton.button == sf::Mouse::Left)
    			{
					/*
        			std::cout << "the right button was pressed" << std::endl;
			        std::cout << "mouse x: " << event.mouseButton.x << std::endl;
			        std::cout << "mouse y: " << event.mouseButton.y << std::endl;
					*/
			   		std::cout << green.checkCollision(event.mouseButton.x, event.mouseButton.y) << std::endl;
			   		if(green.checkCollision(event.mouseButton.x, event.mouseButton.y))	
						green.switchColor();
					else 
						green.switchColor(sf::Color::Red);

				}
			}

	}

		window.clear();
		//window.draw(shape);


		green.draw(window);

		window.display();
	}



	return EXIT_SUCCESS;
}

