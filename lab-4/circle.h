//
// Created by matthew on 11.04.19.
//

#ifndef LAB_4_CIRCLE_H
#define LAB_4_CIRCLE_H

#include "figure.h"

namespace lab4
{
	class Circle : public Figure
	{
		double radius;
	public:
		Circle (const Point &, const string &, double);
		~Circle();

		virtual bool save ( ostream & ) const;

		virtual bool load ( istream & );

	};
};

#endif //LAB_4_CIRCLE_H
