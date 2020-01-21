//
// Created by matthew on 06.06.19.
//

#include "animal.h"

string Animal::names_table [4] = {"Tom", "Jerry", "John", "Paul"};
string Animal::rates_table [4] = {"parrot", "cat", "dog", "hamster"};

Animal::Animal () {
	name = names_table[rand()%4];
	rate = rates_table[rand()%4];
	age = 1+rand()%20;
}


bool Animal::operator<(const Animal & other) const
{
	return age < other.age;
}

bool Animal::operator==(const Animal & other)
{
	return (name == other.name) && (rate == other.rate) && (age == other.age);
}

ostream & operator<< (ostream & stream, Animal & animal)
{
	stream << animal.name << " " << animal.rate << " " << animal.age;
}
