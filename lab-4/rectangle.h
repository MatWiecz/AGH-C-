//
// Created by matthew on 11.04.19.
//

#ifndef LAB_4_RECTANGLE_H
#define LAB_4_RECTANGLE_H

#include "figure.h"

namespace lab4
{
	class Rectangle : public Figure
	{
	protected:
		double a, b;

	public:
		Rectangle(const Point &, const string &, double, double);
		~Rectangle ( );
	};
};

#endif //LAB_4_RECTANGLE_H
