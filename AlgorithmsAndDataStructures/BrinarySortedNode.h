#pragma once

template <class T>
struct TreeNode
{
	TreeNode();
	TreeNode(T info);

	bool IsLeaf() const;
	T info;
	TreeNode* left;
	TreeNode* right;
};