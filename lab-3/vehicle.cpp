//
// Created by matthew on 04.04.19.
//

#include "vehicle.h"

Vehicle::Vehicle ( ) :
	mark{""},
	mileage{0},
	price{0.0f} {}

Vehicle::Vehicle ( const string &mark = "", int mileage = 0,
				   float price = 0.0f ) :
	mark{mark},
	mileage{mileage},
	price{price} {}