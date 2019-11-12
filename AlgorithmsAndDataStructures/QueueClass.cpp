#pragma once

#include "QueueClass.h"
#include "LinkNode.cpp"

#include <stddef.h>

template<class T>
QueueClass<T>::QueueClass()
// Class constructor.
// Post:  qFront and qRear are set to NULL.
{
	qFront = NULL;
	qRear = NULL;
}
template<class T>
QueueClass<T>::~QueueClass()
// Class destructor.
{
	Clear();
}
template<class T>
void QueueClass<T>::Clear()
{
	LinkNode<T>* tempPtr;

	while (IsNotEmpty())
	{
		tempPtr = qFront;
		qFront = qFront->next;
		delete tempPtr;
	}
	qRear = NULL;
}
template<class T>
bool QueueClass<T>::IsNotEmpty() const
// Returns true if there are no elements on the queue; false otherwise.
{
	return (qFront != NULL);
}
template<class T>
bool QueueClass<T>::IsEmpty() const
// Returns true if there are no elements on the queue; false otherwise.
{
	return (qFront == NULL);
}
template<class T>
void QueueClass<T>::Enqueue(T newItem)
{
	//
	//	Create Node
	//
	LinkNode<T>* newNode = new LinkNode<T>(newItem);
	//
	//	Join Node to queue
	//
	JoinQueue(newNode);
	//if (IsEmpty()) 
	//	qFront = newNode;
	//else
	//	qRear->next = newNode;
	//qRear = newNode;
}
template <class T>
void QueueClass<T>::JoinQueue(LinkNode<T>* newNode)
{
	if (IsEmpty())
		qFront = newNode;
	else
		qRear->next = newNode;
	qRear = newNode;
}
template <class T>
void QueueClass<T>::Dequeue(T& itemToReturn)
// Removes front item from the queue and returns
// it in item.
// Pre:  Queue has been initialized and is not
// empty.
// Post: Front element has been removed from
// queue.
//       item is a copy of removed element.
{
	itemToReturn = qFront->info;

	LinkNode<T>* frontNode = qFront;
	this->RemoveFrontNodeFromQueue();
	delete frontNode;
}
template <class T>
void QueueClass<T>::RemoveFrontNodeFromQueue()
{
	//
	//	advance qFront
	//
	qFront = qFront->next;

	if(qFront == NULL)
	{
		qRear = NULL;
	}
}

template <class T>
int QueueClass<T>::IndexOf(T candidate) const
{
	int index = 0;
	for (LinkNode<T>* i = qFront; i != NULL; i = i->next)
	{
		if (i->info == candidate)
			return index;
		index++;
	}
	return -1;
}