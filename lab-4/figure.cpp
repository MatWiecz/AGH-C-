//
// Created by matthew on 11.04.19.
//

#include "figure.h"

using namespace lab4;

Figure::Figure ( const Point & middle, const string &label ) :
	middle {middle},
	label{label} {
}

Figure::~Figure ( ) = default;

void Figure::move ( const Point & target) {
	middle = target;
}

bool Figure::save ( ostream & output) const {
	output << "[";
	middle.save (output);
	output << ";\"" << label << "\"]";
	return true;
}

bool Figure::load ( istream & input) {
	double x, y;
	input >> x >> y;
	if(!input.good ())
	{
		input.clear ();
		input.sync ();
		return false;
	}
	middle = Point(x, y);
	getline (input, label, '$');
	if(!input.good ())
	{
		input.clear ();
		input.sync ();
		return false;
	}
	return true;
}