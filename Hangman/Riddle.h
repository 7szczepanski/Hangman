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
	RectangleShape rect;
	int callculateLenght(string);
	void drawLines(int, int);
	void setPositions(float, float);
	void drawAll(RenderWindow &);
	void prepare(int,int);
protected:
	Vector2f pos;
	int numOfLetters;
	string word;
	vector<Underline> lines;
};

