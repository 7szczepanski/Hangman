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
	pos.x = x_;
	pos.y = y_;
}

void Riddle::drawLines(int width_, int height_) {
	
	for (int i = 0; i <= numOfLetters; i++) {
		cout << "Dlugosc: " << numOfLetters << endl;
		Underline line;
		float curr;
		curr = i * width_/numOfLetters;
		curr += width_ / numOfLetters;
		curr -= 40;// *numOfLetters;

		line.setPosition(Vector2f(curr,height_/2));
		line.setLines(width_, height_);
		lines.push_back(line);
	}
}

void Riddle::drawAll(RenderWindow &target_) {
	for (int i = 0; i < lines.size(); i++) {
		target_.draw(lines[i].sprite);
	}
}