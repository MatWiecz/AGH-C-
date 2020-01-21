//
// Created by matthew on 30.05.19.
//

#ifndef LAB_5_COMMON_H
#define LAB_5_COMMON_H

#include <iostream>

class MyClass
{
public:
	int a;
	double b;

	MyClass(int, double);
};

template <typename a_type, typename b_type, typename c_type>
bool equals (const a_type & a, const b_type & b, const c_type & c);

#endif //LAB_5_COMMON_H
