//
// Created by matthew on 11.04.19.
//

#ifndef LAB_4_SQUARE_H
#define LAB_4_SQUARE_H

#include "point.h"
#include "rectangle.h"

namespace lab4
{
	class Square : public Rectangle
	{
	public:
		Square(const Point &, const string &, double);
		~Square ( );
	};
};

#endif //LAB_4_SQUARE_H
