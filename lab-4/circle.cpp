//
// Created by matthew on 11.04.19.
//

#include "circle.h"

using namespace lab4;

Circle::Circle ( const Point &middle, const string &label, double radius ) :
	Figure ( middle, label ),
	radius{radius} {}

Circle::~Circle ( ) = default;

bool Circle::save ( ostream & output) const {
	output << "[";
	Figure::save (output);
	output << ";" << radius << "]";
	return true;

}

bool Circle::load ( istream & input) {
	if (!Figure::load (input))
	{
		return false;
	}
	input >> radius;
	if(!input.good ())
	{
		input.clear ();
		input.sync ();
		return false;
	}
	return true;
}