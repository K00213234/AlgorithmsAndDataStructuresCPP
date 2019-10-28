#pragma once

#include "StackClass.h"
#include <stddef.h>

template<class T>
StackClass<T>::StackClass()
{
	topPtr = NULL;
}

template <class T>
StackClass<T>::~StackClass()
{
	LinkNode<T>* tempPtr;
	while (topPtr != NULL)
	{
		tempPtr = topPtr;
		topPtr = topPtr->next;
		delete tempPtr;
	}
}

template<class T>
void StackClass<T>::Pop(T& item)
{
	LinkNode<T>* tempPtr;
	item = topPtr->info;
	tempPtr = topPtr;
	topPtr = topPtr->next;
	delete tempPtr;
}

template <class T>
void StackClass<T>::Push(T newItem)
{
	LinkNode<T>* location;
	location = new LinkNode<T>;
	location->info = newItem;
	location->next = topPtr;
	topPtr = location;
}

template <class T>
bool StackClass<T>::IsEmpty() const
{
	return (topPtr == NULL);
}

template <class T>
void StackClass<T>::Clear()
{
	LinkNode<T>* previousTopItem;

	while (topPtr != NULL)
	{
		previousTopItem = topPtr;
		topPtr = topPtr->next;//topPtr = &topPtr.next;
		delete previousTopItem;
	}
}
template <class T>
bool StackClass<T>::Contains(T candidate) const
{
	LinkNode<T>* i;
	i = topPtr;
	while (i != NULL)
	{
		if (i->info == candidate)
		{
			return true;

		}
		//idea//i = i + 1;
		i = i->next;
	}

	return false;
}