#pragma once

template <class T>
struct LinkNode
{
	LinkNode();
	LinkNode(T info);
	LinkNode(T info, LinkNode<T>* next);
	T info;
	LinkNode<T>* next;
};
