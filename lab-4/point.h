//
// Created by matthew on 11.04.19.
//

#ifndef LAB_4_POINT_H
#define LAB_4_POINT_H

#include<iostream>

using namespace std;

namespace lab4 {

	class Point {
		double x, y;

	public:
		Point ( double, double );

		void setX ( double );

		double getX ( ) const;

		bool save ( ostream & ) const;

		bool load ( istream & );

	};

	ostream &operator<< (  ostream &, const Point &);

}

#endif //LAB_4_POINT_H
