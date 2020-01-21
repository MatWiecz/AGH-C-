//
// Created by matthew on 11.04.19.
//

#include "rectangle.h"

using namespace lab4;

Rectangle::Rectangle ( const Point &middle, const string &label, double width,
					   double height ) : Figure ( middle, label ),
										 a{width},
										 b{width} {}

Rectangle::~Rectangle ( ) = default;