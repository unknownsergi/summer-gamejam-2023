#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		window.clear(sf::Color::Black);
		//draw here
		window.display();
	}
    return 0;
}
