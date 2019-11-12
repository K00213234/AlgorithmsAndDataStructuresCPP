// Pointers_SortedType.h
#ifndef POINTERS_SORTED_TYPE_H
#define POINTERS_SORTED_TYPE_H

#include <cstdlib>

template <class itemtype>
struct NodeType
{
	itemtype info;
	NodeType *next;
};

template <class itemtype>
class SortedType
{
	public:
		SortedType();	// Constructor
		~SortedType();	// Destructor
		// Transformers
		void makeEmpty();
		void insertItem(itemtype &newitem);
		void deleteItem(itemtype &item);
		// Observers
		bool isFull()	const;
		int lengthIs()	const;
		bool retrieveItem(itemtype &item);
		bool isThere(itemtype &item);
		// Iterators
		void resetList();
		bool getNextItem(itemtype &item);
	private:
		int length;
		NodeType<itemtype> *currentPos;
		NodeType<itemtype> *listdata;
};
#endif
#include "Pointers_SortedType.cpp"
