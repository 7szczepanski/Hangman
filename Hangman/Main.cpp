#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
int width = 400;
int height = 400;
/*
Ok so what do we need?
Some dictionary, then element of randomness?
pick word from dictionary, print(lines for each letter in word), show letter under the line
*/



int main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "Hangman v1.0");
	vector<string> dictionary;
	string word1 = "kiercpe"; dictionary.push_back(word1);
	string word2 = "acceleration"; dictionary.push_back(word2);


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