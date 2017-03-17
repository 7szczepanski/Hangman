#include "Riddle.h"



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

void Riddle::drawLines(int len_) {
	
	for (int i = 0; i < len_; i++) {
		Underline line;
		float curr;
		curr = i * 400 / len_;
		line.setPosition(Vector2f(curr,200));
		line.setLines(400, 400);
		lines.push_back(line);
	}
}

void Riddle::drawAll(RenderWindow target_) {
	for (int i = 0; i < lines.size(); i++) {
		target_.draw(lines[i].sprite);
	}
}