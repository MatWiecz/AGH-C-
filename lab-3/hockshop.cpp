//
// Created by matthew on 04.04.19.
//

#include "hockshop.h"

Hockshop::Hockshop ( int max_capacity = 10 ) :
	max_capacity{0},
	cur_vehicles_num{0} {
	Build ( max_capacity );
}

Hockshop::~Hockshop ( ) {
	Destroy ( );
}

void Hockshop::Build ( int max_capacity = 10 ) {
	if (this->max_capacity > 0)
		Destroy ( );
	if (max_capacity <= 0)
		max_capacity = 10;
	this->max_capacity = max_capacity;
	vehicles = new Vehicle[max_capacity];
}

void Hockshop::Destroy ( ) {
	if (max_capacity == 0)
		return;
	max_capacity = 0;
	cur_vehicles_num = 0;
	delete[] vehicles;
}

Hockshop::Hockshop ( const Hockshop &other ) :
	max_capacity{other.max_capacity},
	cur_vehicles_num{other.cur_vehicles_num} {
	vehicles = new Vehicle[max_capacity];
	for (int i = 0; i < cur_vehicles_num; i++)
		vehicles[i] = other.vehicles[i];
}

Hockshop::Hockshop ( Hockshop &&other ) :
	max_capacity{other.max_capacity},
	cur_vehicles_num{other.cur_vehicles_num} {
	if (this != & other)
		return;
	vehicles = other.vehicles;
	other.max_capacity = 0;
	other.vehicles = nullptr;
	other.cur_vehicles_num = 0;
}

Hockshop &Hockshop::operator= ( const Hockshop &other ) {
	if (this != & other )
	{
		Destroy ();
		max_capacity = other.max_capacity;
		cur_vehicles_num = other.cur_vehicles_num;
		vehicles = new Vehicle [max_capacity];
		for (int i = 0; i < cur_vehicles_num; i++)
			vehicles[i] = other.vehicles[i];
	}
	return *this;
}

Hockshop& Hockshop::operator= ( Hockshop && other) {
	if ( this != & other )
	{
		Destroy ();
		max_capacity = other.max_capacity;
		other.max_capacity = 0;
		cur_vehicles_num = other.cur_vehicles_num;
		other.cur_vehicles_num = 0;
		vehicles = other.vehicles;
		other.vehicles = nullptr;
	}
	return *this;
}

int Hockshop::getActuallyStoredVehiclesNumber ( ) const {
	return cur_vehicles_num;
}

void Hockshop::storeVehicle ( const Vehicle & vehicle) {
	vehicles[cur_vehicles_num++] = vehicle;
}