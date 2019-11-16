#pragma once

#include "TreeType.h"

class BinarySearchTreeTest
{
public:
	void ExecuteTest();
	void Fill(BinarySearchTree<int>*, int);
	void Fill(BinarySearchTree<int>*, int[], int);
	void Print(BinarySearchTree<int>*);
	void InsertInto();
	void SampleApplicationExit();
	void SampleApplicationMenu();
	void SampleApplicationMain();
};