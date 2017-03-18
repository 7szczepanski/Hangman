#include "Riddle.h"
#include <iostream>



Riddle::Riddle()
{
}


Riddle::~Riddle()
{
}

int Riddle::callculateLenght(string word_) {
	word = word_;
	for (int i = 0; i < word.length(); i++) {
		numOfLetters += 1;
	}
	return numOfLetters;
}
void Riddle::setPositions(float x_, float y_) {
	pos.x = x_/2;
	pos.y = y_/2;

}

void Riddle::drawLines(int width_, int height_) {
	
	for (int i = 0; i < numOfLetters; i++) {
		cout << "Dlugosc: " << numOfLetters << endl;
		float xsiz, ysiz;
		xsiz = 20;// rect.getSize().x;
		xsiz = 20; // xsiz / numOfLetters;
		ysiz = 5;// rect.getSize().y - rect.getSize().y / 2;
		Underline line;
		line.setLines(xsiz, ysiz); // we are actualy seting size of each line based of numOfLetters
		line.sprite.setOrigin(line.sprite.getSize().x / 2, line.sprite.getSize().y / 2);
		line.setPosition(Vector2f((rect.getPosition().x/numOfLetters + i*(20+xsiz)), rect.getPosition().y));
		lines.push_back(line);
	}
}

void Riddle::drawAll(RenderWindow &target_) {
	for (int i = 0; i < lines.size(); i++) {
		target_.draw(lines[i].sprite);
	}
}
void Riddle::prepare(int width_ ,int height_) {
	rect.setSize(Vector2f(width_ - 50, height_ - height_/2));
	rect.setOrigin(Vector2f(rect.getSize().x/2, rect.getSize().y/2));
	rect.setPosition(Vector2f(width_/2, height_/2));
	rect.setOutlineColor(Color::White);
	rect.setOutlineThickness(4.f);
	rect.setFillColor(Color::Transparent);
	
}