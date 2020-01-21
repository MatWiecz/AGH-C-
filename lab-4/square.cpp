//
// Created by matthew on 11.04.19.
//

#include "square.h"

using namespace lab4;

Square::Square ( const Point &middle, const string &label, double size ) :
	Rectangle ( middle, label, size, size ) {}

Square::~Square ( ) = default;