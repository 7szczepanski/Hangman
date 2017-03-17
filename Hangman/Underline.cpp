#include "Underline.h"



Underline::Underline()
{
}


Underline::~Underline()
{
}

void Underline::setLines(int width_, int height_) {
	sprite.setSize(Vector2f(width_ / 10, height_ / 80));
}
void Underline::setPosition(Vector2f pos_) {
	sprite.setPosition(pos_);
}