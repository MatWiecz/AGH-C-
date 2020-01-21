//
// Created by matthew on 30.05.19.
//

#ifndef LAB_5_LINKED_LIST_H
#define LAB_5_LINKED_LIST_H

#include <iostream>
using namespace std;

class LinkedListIndexError
{
public:
	string errorMessage;
	LinkedListIndexError(unsigned int index);
	~LinkedListIndexError ( ) = default;
};

template < typename T >
struct LinkedListNode {
	T * value;
	LinkedListNode < T > *next;
};

template < typename T >
class LinkedList {
	LinkedListNode < T > *first;
public:
	LinkedList ();
	~LinkedList ();
//	LinkedList<T>(const LinkedList<T> &) = delete;
//	LinkedList<T> & operator =(LinkedList<T> &&) = delete;
//	LinkedList<T> &operator = (const LinkedList<T> &) = delete;
	void insert(unsigned int index, const T & value);
	template < typename U >
	friend ostream & operator<<(ostream & stream, LinkedList <U> linkedList);
};

template < typename T >
ostream & operator<<(ostream & stream, LinkedList <T> linkedList);

#endif //LAB_5_LINKED_LIST_H
