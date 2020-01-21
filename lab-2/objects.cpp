#include "objects.h"

Matrix2x2::Matrix2x2 ( ) {
	memset ( values[0], 0, 4 * sizeof ( float ));
}

Matrix2x2::Matrix2x2 ( int values_num, const float *data ) {
	Matrix2x2 ( );
	memcpy ( values, data, values_num * sizeof ( float ));
}

float Matrix2x2::getValue ( int row, int column ) const {
	if (row < 2 && column < 2)
		return values[row][column];
	exit ( 1 );
}

Matrix2x2 Matrix2x2::operator- ( ) {
	Matrix2x2 new_matrix;
	for (int i = 0; i < 4; i++ )
		new_matrix.values[i][0] = - values [i][0];
	return new_matrix;
}

Matrix2x2::operator float const ( ) {
	return *values[0]* *values[3] - *values[1] * *values[2];
}

Vector1x2::Vector1x2 ( ) {
	memset ( values, 0, 2 * sizeof ( float ));
}

Vector1x2::Vector1x2 ( int values_num, const float *data ) {
	Vector1x2 ( );
	memcpy ( values, data, values_num * sizeof ( float ));
}

float Vector1x2::getValue ( int id ) const {
	if (id < 2)
		return values[id];
	exit ( 1 );

}

Vector1x2 Vector1x2::operator- ( const Vector1x2 & other_vector) {
	Vector1x2 new_vector;
	for ( int i = 0; i < 2; i++)
		new_vector.values[i] = values[i] - other_vector.values[i];
	return  new_vector;
}

Vector1x2 Vector1x2::operator* ( const Matrix2x2 & other_matrix) {
	Vector1x2 new_vector;
	for (int i = 0; i < 2; i++ )
	{
		float sum = 0.0f;
		for (int x = 0; x < 2; x++)
			sum += getValue (x) * other_matrix.getValue (x, i);
		new_vector.values[i] = sum;
	}
	return new_vector;
}

Vector1x2 & Vector1x2::operator++ ( ) {
	for (int i = 0; i < 2; i++ )
		values[i] += 1.0f;
	return *this;
}

bool Vector1x2::operator== ( const Vector1x2 & other_vector) {
	return (values[0]==other_vector.values[0]
		&& values[1]==other_vector.values[1]);
}

float & Vector1x2::operator[] ( int id ) {
	return values[id];
}

ostream &operator<< ( ostream &stream, const Matrix2x2 &matrix ) {
	for (int y = 0; y < 2; y++) {
		stream << "| ";
		for (int x = 0; x < 2; x++)
			stream << matrix.getValue ( y, x ) << " ";
		stream << "|" << endl;
	}
	return stream;
}

ostream &operator<< ( ostream &stream, const Vector1x2 &vector ) {
	stream << "[ ";
	for (int i = 0; i < 2; i++) {
		stream << vector.getValue ( i );
		if (i + 1 != 2)
			stream << ", ";
	}
	stream << " ]" << endl;
	return stream;
}

Matrix2x2 operator* ( const Matrix2x2 & matrix, float value)
{
	Matrix2x2 new_matrix;
	for (int i =0; i < 4; i++ )
		(*new_matrix.values[i]) = matrix.values[i][0]*value;
	return new_matrix;
}

Matrix2x2 operator* ( float value, const Matrix2x2 & matrix)
{
	return matrix * value;
}