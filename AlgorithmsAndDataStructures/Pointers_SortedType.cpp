// Pointers_SortedType.cpp
// Constructor

// Pointers_UnSortedType.cpp
#include "Pointers_SortedType.h"


template <class itemtype>
SortedType<itemtype>::SortedType()
{
	listdata = NULL;
	length = 0;
}
// Destructor
template <class itemtype>
SortedType<itemtype>::~SortedType()
{
	makeEmpty();
}
// Transformers
template <class itemtype>
void SortedType<itemtype>::makeEmpty()
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
void SortedType<itemtype>::insertItem(itemtype &newitem)
{
	NodeType<itemtype> *newNode = new NodeType<itemtype>;
	NodeType<itemtype> *predLoc = NULL, *location = listdata;
	newNode->info = newitem;		// Copy item into newNode info
	bool mts = (location != NULL);
	while(mts)
	{
		if(location->info < newitem)
		{
			predLoc = location;
			location = location->next;
			mts = (location != NULL);
		}
		else mts = false;
	}
	if(predLoc == NULL) // To insert at the Item into an empty list or at the start
	{
		newNode->next = listdata;
		listdata = newNode;
	}
	else // To insert the Item into list that is not empty
	{
		newNode->next = location;
		predLoc->next = newNode;
	}
	length++;
}
template <class itemtype>
void SortedType<itemtype>::deleteItem(itemtype &item)
{
	NodeType<itemtype> *predLoc = NULL, *location = listdata;
	bool mts = (location != NULL);
	while(mts)
	{
		if(location->info < item)
		{
			predLoc = location;
			location = location->next;
		}
		else if(location->info == item)
			mts = false;
	}
	if(predLoc == NULL)	listdata = location->next;		// To delete an Item at the start of the list
	else				predLoc->next = location->next;	// To delete other Items
	delete location;
	length--;
}
// Observers
template <class itemtype>
bool SortedType<itemtype>::isFull() const
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
int SortedType<itemtype>::lengthIs() const
{
	return length;
}
template <class itemtype>
bool SortedType<itemtype>::retrieveItem(itemtype &item)
{
	NodeType<itemtype> *location = listdata;
	bool found = false;
	bool mts = (location != NULL);
	while(mts && !found)
	{
		if(location->info  < item)
		{
			location = location->next;
			mts = (location != NULL);
		}
		else if(item == location->info)
		{
			found = true;
			item = location->info;
		}
		else mts = false;
	}
	return found;
}
template <class itemtype>
bool SortedType<itemtype>::isThere(itemtype &item)
{
	NodeType<itemtype> *location = listdata;
	bool mts = (location != NULL);
	while(mts)
	{
		if(location->info  < item)
		{
			location = location->next;
			mts = (location != NULL);
		}
		else if(item == location->info)
		{
			item = location->info;
			return true;
		}
		else mts = false;
	}
	return false;
}
// Iterators
template <class itemtype>
void SortedType<itemtype>::resetList() 
{
	currentPos = listdata;
}
template <class itemtype>
bool SortedType<itemtype>::getNextItem(itemtype& item)
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