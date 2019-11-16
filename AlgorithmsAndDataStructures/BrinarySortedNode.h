#pragma once

template <class T>
struct TreeNode
{
	TreeNode();
	TreeNode(T info);

	T info;
	TreeNode* left;
	TreeNode* right;
};