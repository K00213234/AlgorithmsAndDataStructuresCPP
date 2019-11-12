#pragma once

#include "BrinarySortedNode.h"

#include <iostream>

using namespace std;

template<class ItemType>
class TreeType
{
public:
	TreeType(); // constructor
	~TreeType(); // destructor
	TreeType(const TreeType<ItemType>& originalTree);
	void operator=(const TreeType<ItemType>& originalTree);

	void MakeEmpty();
	bool IsEmpty() const;
	int NumberOfNodes() const;
	void RetrieveItem(ItemType& item, bool& found);
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetTree();
	void GetNextItem(ItemType& item, bool& finished);
	void PrintTree(ofstream& outFile) const;
private:
	TreeNode<ItemType>* root;
};
