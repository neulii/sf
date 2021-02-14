#include <SFML/Graphics.hpp>

class GreenCircle
{
	private:
		int radius;
		int xPosition;
		int yPosition;
		
		sf::Color color;

		sf::CircleShape* shape;
		sf::RectangleShape* rect;

	public:

		GreenCircle(int radius,int xPosition, int yPosition);
		void draw(sf::RenderWindow& window);
		bool checkCollision(int x, int y);	


};
