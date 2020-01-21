#include <iostream>
using namespace std;
#include "common.h"
#include "linked_list.h"
#include "linked_list.cpp"

int main ( ) {
	cout << "Hello, World!" << endl;
//	MyClass obj1(3, 4.0);
//	MyClass obj2(1, 2.0);
//	MyClass obj3(5, 0.0);
//	cout << equals (obj1, obj2, obj3) << endl;
	try{
		LinkedList < double > linkedList;
		linkedList.insert ( 0, 1.0 );
		linkedList.insert ( 0, 2.0 );
		linkedList.insert ( 1, 3.0 );
		cout << linkedList << endl;
	}
	catch (LinkedListIndexError * error)
	{
		cout << error->errorMessage << endl;
	}
	return 0;
}