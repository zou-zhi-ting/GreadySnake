#include "point.h"
#include "tools.h"
#include <iostream>

void Point::Print() {
	SetCusorPosition(x, y);
	std::cout << "¡ö" ;
}

void Point::PrintCircular() {
	SetCusorPosition(x, y);
	std::cout << "¡ñ";
}

void Point::Clear() {
	SetCusorPosition(x, y);
	std::cout << "  ";
}

void Point::ChangePosition(const int x, const int y) {
	this->x = x;
	this->y = y;
}