//
// Created by matthew on 06.06.19.
//

#ifndef LAB_6_ANIMAL_H
#define LAB_6_ANIMAL_H

#include <iostream>
using namespace std;
#include <cstdlib>

class Animal
{
	string name;
	string rate;
	int age;
	static string names_table [4];
	static string rates_table [4];

public:
	Animal();
	~Animal () = default;
	bool operator<(const Animal & other) const;
	bool operator==(const Animal & other);
	friend ostream & operator<< (ostream & stream, Animal & animal);
};

ostream & operator<< (ostream & stream, Animal & animal);

#endif //LAB_6_ANIMAL_H
