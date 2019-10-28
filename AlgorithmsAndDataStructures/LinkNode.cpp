#include "LinkNode.h"
template <class T>
struct LinkNode
{
	T info;
	LinkNode<T>* next;
};