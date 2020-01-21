//
// Created by matthew on 30.05.19.
//

#include "linked_list.h"

LinkedListIndexError::LinkedListIndexError ( unsigned int index ) :
	errorMessage{
		"Cannot insert object under index " + to_string ( index ) + "!"} {}

template < typename T >
LinkedList<T>::LinkedList( ): first{nullptr} {}

template < typename T >
LinkedList<T>::~LinkedList ( ) {
	LinkedListNode < T > *tempNode = first;
	while (tempNode != nullptr) {
		LinkedListNode < T > *nextNode = tempNode->next;
		delete tempNode->value;
		delete tempNode;
		tempNode = nextNode;
	}
	first = nullptr;
}

template < typename T >
void LinkedList<T>::insert ( unsigned int index, const T & value ) {
	unsigned int index_counter = 0;
	LinkedListNode < T > *tempNode = first;
	while (index_counter < index) {
		if (tempNode == nullptr)
			throw new LinkedListIndexError ( index );
		tempNode = tempNode->next;
		index_counter++;
	}
	LinkedListNode < T > *newNode = new LinkedListNode < T >;
	if(index_counter == 0)
	{
		newNode->next = tempNode;
		first = newNode;
	}
	else
	{
		newNode->next = tempNode->next;
		tempNode->next = newNode;
	}
	if(first == nullptr)
		first = newNode;
	newNode->value = new T(value);
}

template < typename T >
ostream &operator<< ( ostream &stream, LinkedList < T > linkedList ) {
	LinkedListNode < T > *tempNode = linkedList.first;
	stream << "Contents of list at address: " << & linkedList << ":" << endl;
	unsigned int index = 0;
	while (tempNode != nullptr) {
		stream << index << ": " << * tempNode->value << endl;
		index++;
		tempNode = tempNode->next;
	}
	return stream;
}