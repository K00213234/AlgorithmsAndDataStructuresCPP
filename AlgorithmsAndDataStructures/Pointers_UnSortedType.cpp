// Pointers_UnSortedType.cpp
#include "Pointers_UnSortedType.h"


template <class itemtype>
UnSortedType<itemtype>::UnSortedType()
{
	listdata = NULL;
	length = 0;
}
// Destructor
template <class itemtype>
UnSortedType<itemtype>::~UnSortedType()
{
	makeEmpty();
}
// Transformers
template <class itemtype>
void UnSortedType<itemtype>::makeEmpty()
{
	NodeType<itemtype> *temp;
	while(listdata != NULL)
	{
		temp = listdata;
		listdata = listdata->next;
		delete temp;
	}
	length = 0;
}
template <class itemtype>
void UnSortedType<itemtype>::insertItem(itemtype &newitem)
{
	NodeType<itemtype> *newNode = new NodeType<itemtype>; // New Item for list
	newNode->info = newitem;		// Copy item into newNode info
	newNode->next = listdata;	// Connects the node to the start of the list
	listdata = newNode;			// Resets listdata to the first node in the list
	length++;	// Increases the length
}
template <class itemtype>
void UnSortedType<itemtype>::deleteItem(itemtype &item)
{
	NodeType<itemtype> *temp;
	if(item == listdata->info)
	{
		temp = listdata;
		listdata = listdata->next;
	}
	else
	{
		NodeType<itemtype> *location = listdata;
		while(item != (location->next)->info)
			location = location->next;
		temp = location->next;
		location->next = (location->next)->next;
	}
	delete temp;
	length--;
}
template <class itemtype>
bool UnSortedType<itemtype>::isFull() const
{
	NodeType<itemtype> *test = new NodeType<itemtype>;
	if(test == NULL)
		return true;
	else
	{
		delete test;
		return false;
	}
}
template <class itemtype>
int UnSortedType<itemtype>::lengthIs() const
{
	return length;
}
template <class itemtype>
bool UnSortedType<itemtype>::retrieveItem(itemtype &item)
{
	NodeType<itemtype> *location = listdata;
	bool found = false;
	bool mts = (location != NULL);
	while(mts && !found)
	{
		if(item == location->info)
		{
			item = location->info;
			found = true;
		}
		else
		{
			location = location->next;
			mts = (location != NULL);
		}
	}
	return found;
}
template <class itemtype>
bool UnSortedType<itemtype>::isThere(itemtype &item)
{
	NodeType<itemtype> *location = listdata;
	bool mts = (location != NULL);
	while(mts)
	{
		if(item == location->info)	return true;
		else
		{
			location = location->next;
			mts = (location != NULL);
		}
	}
	return false;
}
// Iterators
template <class itemtype>
void UnSortedType<itemtype>::resetList() 
{
	currentPos = listdata;
}
template <class itemtype>
bool UnSortedType<itemtype>::getNextItem(itemtype &item)
{
	if(currentPos != NULL)
	{
		item = currentPos->info;
		currentPos = currentPos->next;
		return true;
	}
	else
		return false;
}