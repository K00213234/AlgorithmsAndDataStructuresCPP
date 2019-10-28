#pragma once
#include "LinkNode.cpp"

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
	bool IsEmpty() const;
	void Pop(T& item);
	void Push(T item);
private:
	LinkNode<T>* topPtr;
};
