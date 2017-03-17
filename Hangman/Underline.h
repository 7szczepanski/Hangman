#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;
using namespace std;
class Underline
{
public:
	RectangleShape sprite;
	void setLines(int, int);
	void setPosition(Vector2f);
	Underline();
	~Underline();
};

