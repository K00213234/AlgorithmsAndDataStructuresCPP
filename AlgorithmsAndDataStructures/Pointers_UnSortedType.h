// Pointers_UnSortedType.h
#ifndef POINTERS_UNSORTED_TYPE_H
#define POINTERS_UNSORTED_TYPE_H

#include <cstdlib>

template <class T>
struct NodeType
{
	T info;
	NodeType *next;
	template<class T>
	inline NodeType()
	{
	}

	template<class T>
	inline NodeType(T info)
	{
		this->info = info;
		this->next = NULL;
	}

	template<class T>
	inline NodeType(T info, NodeType<T>* next)
	{
		this->info = info;
		this->next = next;
	}
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
		bool IsEmpty() const;
		bool IsNotEmpty() const;
		bool isFull()	const; //Does not work
		int lengthIs()	const;
		bool retrieveItem(T &item);
		bool Contains(T &item);
		bool Contains_For(T& item);
		// Iterator
		void resetListIterator();
		bool getNextItem(T &item);
	private:
		//
		//	functions
		//
		void popAndDeleteFirstNode();
		//
		//	fields
		//
		int length;
		NodeType<T>* firstLinkNode;
		//
		// for iterator
		//
		NodeType<T>* currentPos;

};
#endif
