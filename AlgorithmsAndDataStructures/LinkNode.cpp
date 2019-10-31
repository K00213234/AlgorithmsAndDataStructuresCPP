#pragma once
#include <stddef.h>

#include "LinkNode.h"
template<class T>
inline LinkNode<T>::LinkNode()
{
}

template<class T>
inline LinkNode<T>::LinkNode(T info)
{
	this->info = info;
	this->next= NULL;
}

template<class T>
inline LinkNode<T>::LinkNode(T info, LinkNode<T>* next)
{
	this->info = info;
	this->next = next;
}
