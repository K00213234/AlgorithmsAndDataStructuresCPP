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
	while (IsNotEmpty())
	{
		popAndDeleteFirstNode();
	}
	length = 0;
}
template<class T>
void UnSortedType<T>::popAndDeleteFirstNode()
{
	NodeType<T>* nodeToDelete = firstLinkNode;
	firstLinkNode = firstLinkNode->next;
	delete nodeToDelete;
}
template <class T>
void UnSortedType<T>::insertItem(T& newItem)
{
	NodeType<T>* newNode = new NodeType<T>(newItem);

	newNode->next = firstLinkNode;

	firstLinkNode = newNode;

	length++;	// Increases the length
}
template <class T>
void UnSortedType<T>::deleteItem(T& item)
{
	if (item == firstLinkNode->info)
	{
		popAndDeleteFirstNode();
	}
	else
	{
		NodeType<T>* location;
		
		location = firstLinkNode;
		while (item != (location->next)->info)//Review on sunday
			location = location->next;
		
		//taking note of the cut node
		NodeType<T>* nodeToDelete = location->next;
		//Cuting out a node
		location->next = (location->next)->next;
		delete nodeToDelete;
	}


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

template<class T>
bool UnSortedType<T>::IsNotEmpty() const
// Returns true if there are no elements on the queue; false otherwise.
{
	return (firstLinkNode != NULL);
}
template<class T>
bool UnSortedType<T>::IsEmpty() const
// Returns true if there are no elements on the queue; false otherwise.
{
	return (firstLinkNode == NULL);
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
void UnSortedType<T>::resetListIterator()
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