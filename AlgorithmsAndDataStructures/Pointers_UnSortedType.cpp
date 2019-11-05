// Pointers_UnSortedType.cpp
#include "Pointers_UnSortedType.h"


template <class T>
UnSortedType<T>::UnSortedType()
{
	firstLinkNode = NULL;
	length = 0;
}
// Destructor
template <class T>
UnSortedType<T>::~UnSortedType()
{
	makeEmpty();
}
// Transformers
template <class T>
void UnSortedType<T>::makeEmpty()
{
	NodeType<T>* temp;
	while (firstLinkNode != NULL)
	{
		temp = firstLinkNode;
		firstLinkNode = firstLinkNode->next;
		delete temp;
	}
	length = 0;
}
template <class T>
void UnSortedType<T>::insertItem(T& newitem)
{
	NodeType<T>* newNode = new NodeType<T>; // New Item for list
	newNode->info = newitem;		// Copy item into newNode info
	newNode->next = firstLinkNode;	// Connects the node to the start of the list


	firstLinkNode = newNode;			// Resets listdata to the first node in the list
	length++;	// Increases the length
}
template <class T>
void UnSortedType<T>::deleteItem(T& item)
{
	NodeType<T>* temp;
	if (item == firstLinkNode->info)
	{
		temp = firstLinkNode;
		firstLinkNode = firstLinkNode->next;
	}
	else
	{
		NodeType<T>* location = firstLinkNode;
		while (item != (location->next)->info)//Review on sunday
			location = location->next;
		temp = location->next;
		location->next = (location->next)->next;
	}
	delete temp;
	length--;
}
template <class T>
bool UnSortedType<T>::isFull() const
{
	NodeType<T>* test = new NodeType<T>;
	if (test == NULL)
		return true;
	else
	{
		delete test;
		return false;
	}
}
template <class T>
int UnSortedType<T>::lengthIs() const
{
	return length;
}
template <class T>
bool UnSortedType<T>::retrieveItem(T& item)
{
	NodeType<T>* location = firstLinkNode;
	bool found = false;
	bool moreToSearch = (location != NULL);
	while (moreToSearch && !found)
	{
		if (item == location->info)
		{
			item = location->info;
			found = true;
		}
		else
		{
			location = location->next;
			moreToSearch = (location != NULL);
		}
	}
	return found;
}
template <class T>
bool UnSortedType<T>::Contains(T& candiateItem)
{
	NodeType<T>* i = firstLinkNode;
	while (i != NULL)
	{
		if (i->info == candiateItem)
			return true;
		else
		{
			i = i->next;
		}
	}
	return false;
}
template <class T>
bool UnSortedType<T>::Contains_For(T& candiateItem)
{
	for (NodeType<T>* i = firstLinkNode; i != NULL; i = i->next)
	{
		if (i->info == candiateItem)
			return true;
	}
	return false;
}

// Iterators
template <class T>
void UnSortedType<T>::resetList()
{
	currentPos = firstLinkNode;
}
template <class T>
bool UnSortedType<T>::getNextItem(T& itemContainer)
{
	if (currentPos != NULL)
	{
		itemContainer = currentPos->info;
		currentPos = currentPos->next;
		return true;
	}
	else
		return false;
}