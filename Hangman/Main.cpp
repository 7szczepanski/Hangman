#include <SFML/Graphics.hpp>
#include "Riddle.h"
#include "Underline.h"
using namespace std;
using namespace sf;
int width = 600;
int height = 600;
/*
Ok so what do we need?
Some dictionary, then element of randomness?
pick word from dictionary, print(lines for each letter in word), show letter under the line
*/



int main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "Hangman v1.0");
	vector<string> dictionary;
	string word1 = "koniczyna"; dictionary.push_back(word1);
	string word2 = "acceleration"; dictionary.push_back(word2);
	Riddle riddle;
	riddle.callculateLenght(word1);
	riddle.prepare(width, height);
	
	riddle.drawLines(width, height);
	//riddle.setPositions(200, 200);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		
		
		riddle.drawAll(window);
		window.draw(riddle.rect);
		window.display();
	}

	return 0;
}