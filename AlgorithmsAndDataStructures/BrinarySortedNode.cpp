#pragma once

#include "BrinarySortedNode.h"
#include <stddef.h>

template<class T>
inline TreeNode<T>::TreeNode()
{
}

template<class T>
inline TreeNode<T>::TreeNode(T info)
{
	this->info = info;
	this->left = NULL;
	this->right = NULL;
}
template<class T>
bool TreeNode<T>::IsLeaf() const
{
	return this->left == NULL && this->right == NULL;
}

