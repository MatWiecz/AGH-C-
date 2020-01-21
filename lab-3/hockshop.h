//
// Created by matthew on 04.04.19.
//

#ifndef LAB_3_HOCKSHOP_H
#define LAB_3_HOCKSHOP_H

#include "vehicle.h"

class Hockshop
{
	int max_capacity;
	Vehicle * vehicles;
	int cur_vehicles_num;

	public:
	Hockshop (int);
	Hockshop (const Hockshop &);
	Hockshop(Hockshop&&);
	~Hockshop ( );
	Hockshop&operator=(const Hockshop &);
	Hockshop & operator= (Hockshop && );
	int getActuallyStoredVehiclesNumber () const;
	void storeVehicle (const Vehicle &);

	void Build (int);
	void Destroy ();
};

#endif //LAB_3_HOCKSHOP_H
