#pragma once
#include <string>
#include <SFML\Graphics.hpp>
#include "Underline.h"
using namespace sf;
using namespace std;
class Riddle
{
public:
	Riddle();
	~Riddle();
	int callculateLenght(string);
	void drawLines(int);
	void setPositions(float, float);
	void drawAll(RenderWindow);
protected:
	Vector2f pos;
	int numOfLetters;
	string word;
	vector<Underline> lines;
};

