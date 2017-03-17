#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
int width = 400;
int height = 400;
int main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "Hangman v1.0");


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}