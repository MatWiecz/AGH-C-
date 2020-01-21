//
// Created by matthew on 11.04.19.
//

#include "point.h"
using namespace lab4;

Point::Point ( double x, double y): x{x}, y{y} {}

void Point::setX ( double x) {
	this->x = x;
}

double Point::getX ( ) const {
	return x;
}

bool Point::save ( ostream & output) const {
	output << "[" << x << ";" << y << "]";
	return true;
}

bool Point::load ( istream & input) {
	input >> x >> y;
	if(!input.good ())
	{
		input.clear ();
		input.sync ();
		return false;
	}
	return true;
}

ostream &operator<< (  ostream & output, const Point & point)
{
	point.save (output);
	return output;
}