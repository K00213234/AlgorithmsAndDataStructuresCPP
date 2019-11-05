#pragma once
#include "LinkNode.h"

template<class T>
class StackClass
{
public:
	StackClass();
	~StackClass();
#pragma region Methods
#pragma endregion
	void Clear();
	bool Contains(T candidate) const;
	bool Contains_For(T candidate) const;
	bool IsEmpty() const;
	void Pop(T& item);
	void Peek(T& item);
	void Push(T item);
	void Print() const;
	void Print_For() const;
	int Size() const;
private:
	LinkNode<T>* topPtr;
};
