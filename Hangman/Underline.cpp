#include "Underline.h"



Underline::Underline()
{
}


Underline::~Underline()
{
}

void Underline::setLines(int xsiz, int ysiz) {
	sprite.setSize(Vector2f(xsiz, ysiz));
	sprite.setOutlineColor(Color::Black);
}
void Underline::setPosition(Vector2f pos_) {
	sprite.setPosition(pos_);
}