//
// Created by matthew on 04.04.19.
//

#ifndef LAB_3_VEHICLE_H
#define LAB_3_VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle
{
	string mark;
	int mileage;
	float price;

	public:
	Vehicle ();
	Vehicle ( const string &, int, float );
};

#endif //LAB_3_VEHICLE_H
