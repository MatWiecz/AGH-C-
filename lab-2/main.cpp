#include "objects.h"

int main ( ) {
	float data[] = {1.0, 2.0, 3.0, 4.0};
	Matrix2x2 matrix ( 4, data );
	cout << matrix << endl;
	Vector1x2 vector ( 2, data );
	cout << vector << endl;
	return 0;
}