// Pointers_UnSortedType.h
#ifndef POINTERS_UNSORTED_TYPE_H
#define POINTERS_UNSORTED_TYPE_H

#include <cstdlib>

template <class T>
struct NodeType
{
	T info;
	NodeType *next;
};

template <class T>
class UnSortedType
{
	public:
		UnSortedType();		// Constructor
		~UnSortedType();	// Destructor
		// Transformers
		void makeEmpty();
		void insertItem(T& newitem);
		void deleteItem(T& item);
		// Observers
		bool isFull()	const; //Does not work
		int lengthIs()	const;
		bool retrieveItem(T &item);
		bool Contains(T &item);
		bool Contains_For(T& item);
		// Iterators
		void resetList();
		bool getNextItem(T &item);
	private:
		int length;
		NodeType<T> *currentPos;
		NodeType<T>* firstLinkNode;
};
#endif
