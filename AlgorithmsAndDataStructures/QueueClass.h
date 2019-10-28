#pragma once
#include "LinkNode.h"

template <class T>
class QueueClass
{
public:
	QueueClass();
	~QueueClass();
#pragma region Methods
#pragma endregion
	void Clear();
	bool IsEmpty() const;
	void Enqueue(T newItem);
	void Dequeue(T& item);
private:
	void RemoveFrontNodeFromQueue();
	void JoinQueue(LinkNode<T>* newNode);
	//
	//	fields
	//
	LinkNode<T>* qFront;
	LinkNode<T>* qRear;
};;

