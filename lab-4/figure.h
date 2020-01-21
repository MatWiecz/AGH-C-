//
// Created by matthew on 11.04.19.
//

#ifndef LAB_4_FIGURE_H
#define LAB_4_FIGURE_H

#include "point.h"

namespace lab4 {

	class Figure {
	protected:
		Point middle;
		string label;

	public:
		string description;
		double area;

		Figure ( const Point &, const string & );

		virtual ~Figure ( );

		void move ( const Point & );

		virtual bool save ( ostream & ) const;

		virtual bool load ( istream & );

	};
}

#endif //LAB_4_FIGURE_H
