#pragma once

#include "BrinarySortedNode.h"

#include <iostream>

using namespace std;

template<class ItemType>
class BinarySearchTree
{
public:
	BinarySearchTree(); // constructor
	~BinarySearchTree(); // destructor
	BinarySearchTree(const BinarySearchTree<ItemType>& originalTree);
	void operator=(const BinarySearchTree<ItemType>& originalTree);

	void MakeEmpty();
	bool IsEmpty() const;
	int NumberOfNodes() const;
	int SumOfNodes() const;
	int SumOfLeafNodes() const;
	void RetrieveItem(ItemType& item, bool& found);
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetTree();
	void GetNextItem(ItemType& item, bool& finished);
	void PrintTree(ofstream& outFile) const;


	void displayInOrder();
	void displayPreOrder();
	void displayPostOrder();

	void displayInOrder(TreeNode< ItemType>* nodePtr);
	void displayPreOrder(TreeNode< ItemType>* nodePtr);
	void displayPostOrder(TreeNode< ItemType>* nodePtr);

private:
	TreeNode<ItemType>* root;
};
