#include "Move.class.h"
#include <iostream>

Move::Move(double a = 0, double b = 0): x(a), y(b)
{}

Move Move::add(const Move &m) const {
	return Move(x + m.x, y + m.y);
}

void Move::reset(double a = 0, double b = 0){
	x = a;
	y = b;
}

void Move::showmove() const {
	std::cout << "Current position : x [" << x << "] y [" << y << "]" << std::endl; 
}
