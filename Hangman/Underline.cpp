#include "Underline.h"



Underline::Underline()
{
}


Underline::~Underline()
{
}

void Underline::setLines(int width_, int height_) {
	sprite.setSize(Vector2f(20.f, 5.f));
}
void Underline::setPosition(Vector2f pos_) {
	sprite.setPosition(pos_);
}