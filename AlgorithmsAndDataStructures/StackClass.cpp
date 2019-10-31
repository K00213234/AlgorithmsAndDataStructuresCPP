#pragma once

#include "StackClass.h"
#include "LinkNode.cpp"
#include <stddef.h>
#include <iostream>

using namespace std;

template<class T>
StackClass<T>::StackClass()
{
	topPtr = NULL;
}

template <class T>
StackClass<T>::~StackClass()
{
	Clear();
}

template<class T>
void StackClass<T>::Pop(T& item)
{
	item = topPtr->info;

	LinkNode<T>* previousTopItem;
	previousTopItem = topPtr;
	topPtr = topPtr->next;

	delete previousTopItem;
}

template <class T>
void StackClass<T>::Push(T newItem)
{
	LinkNode<T>* linkNode = new LinkNode<T>(newItem);

	linkNode->next = topPtr;

	topPtr = linkNode;
}

template<class T>
void StackClass<T>::Print() const
{
	LinkNode<T>* i;

	i = topPtr;
	while (i != NULL)
	{
		cout << i->info << " ";
		i = i->next;
	}

	cout << endl;
}
template<class T>
void StackClass<T>::Print_For() const
{
	for(LinkNode<T>* i = topPtr; i != NULL; i = i->next)
	{
		cout << i->info << " ";		
	}
	cout << endl;
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

	while (!IsEmpty)
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