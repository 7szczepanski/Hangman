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
		Underline line;
		line.setLines(width_, height_);
		float curr;
		curr = rect.getPosition().x + i * (rect.getSize().x/numOfLetters);
		float offset;
		offset = line.sprite.getSize().x;

		line.setPosition(Vector2f(curr+offset,rect.getPosition().y+rect.getSize().y/2));
		
		lines.push_back(line);
	}
}

void Riddle::drawAll(RenderWindow &target_) {
	for (int i = 0; i < lines.size(); i++) {
		target_.draw(lines[i].sprite);
	}
}
void Riddle::prepare(int width_ ,int height_) {
	Vector2f posn;
	
	posn.x = width_-numOfLetters*50;
	posn.y = height_ / 4;
	rect.setSize(posn);
	rect.setPosition(Vector2f(width_/2-rect.getSize().x/2, height_/2-rect.getSize().y/2));
	//rect.setOrigin(rect.getSize().x / 2, rect.getSize().y / 2);
	rect.setFillColor(Color::Transparent);
	rect.setOutlineColor(Color::White);
	rect.setOutlineThickness(2.f);
}