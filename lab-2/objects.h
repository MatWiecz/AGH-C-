//
// Created by matthew on 28.03.19.
//

#ifndef LAB_2_OBJECTS_H
#define LAB_2_OBJECTS_H

#include <iostream>

using namespace std;

#include <cstring>


class Matrix2x2 {
	float values[2][2];
public:
	friend Matrix2x2 operator* ( const Matrix2x2 &, float );
	friend Matrix2x2 operator* ( float, const Matrix2x2 & );
	Matrix2x2 ( );

	Matrix2x2 ( int, const float * );

	float getValue ( int, int ) const;

	Matrix2x2 operator- ();

	operator float const();
};

class Vector1x2 {
	float values[2];
public:
	Vector1x2 ( );

	Vector1x2 ( int, const float * );

	float getValue ( int ) const;


	Vector1x2 operator- ( const Vector1x2 & );

	Vector1x2 operator* ( const Matrix2x2 & );

	Vector1x2 & operator++ ();

	bool operator == (const Vector1x2 &);

	float & operator[] (int id);
};

ostream &operator<< ( ostream &, const Matrix2x2 & );

ostream &operator<< ( ostream &, const Vector1x2 & );

Matrix2x2 operator* ( const Matrix2x2 &, float );

Matrix2x2 operator* ( float, const Matrix2x2 & );

#endif //LAB_2_OBJECTS_H
