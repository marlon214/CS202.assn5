#ifndef LINKED_H
#define LINKED_H

#include <iostream>

using namespace std;

//Doubly Linked Node struct
template<class T>
struct Node
{
	T data;
	Node* next, *prev;

	Node() { next = prev = nullptr; }
	Node(T data) { this->data = data; next = prev = nullptr; }
};

//Templated Linked List class that can contain any data type
//This keeps only the head to a doubly linked node
template<class T>
class LinkedList
{
	Node<T>* head; //Points to the first Node in the list

	public:
		void insertSorted(T new_item);
		void deleteItem(T search_item);
		void printList();

		LinkedList() { head = nullptr; } //Default constructor initializes list to empty
		~LinkedList();
};

//TODO: Write the implementations of all of the unfinished functions and operator overloads
//insertSorted's setup is given for reference on how to template functions

template <class T>
istream& operator >> (istream& in, LinkedList<T>& list)
{
	//Finish the >> operator overload
	//This should read in some item of type T and then add
	//it to the given list, also of type T
	return in;
}

//------------------------- LinkedList<T> functions --------------------------
//Write all of the definitions for the functions here

#endif
