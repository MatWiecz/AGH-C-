#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#include "animal.h"

Animal generateAnimal ()
{
	return Animal();
}

int main ( ) {
	vector <Animal> animals(15);
	generate(animals.begin(), animals.end(), generateAnimal);
	for (auto & curAnimal : animals)
		cout << curAnimal << endl;
	set <Animal> animalsSet(animals.begin(), animals.end());
	set <Animal>::iterator it;
	for (it = animalsSet.begin(); it != animalsSet.end(); ++it)
	{
		Animal curAnimal = * it;
		int repeatNum = count(animals.begin(), animals.end(), curAnimal);
		cout << curAnimal << ": " << repeatNum << endl;
	}
	//it = animalsSet.rbegin();
	//Animal curAnimal = *it;
	//cout << "The oldest animal: " << curAnimal << endl;
	return 0;
}
