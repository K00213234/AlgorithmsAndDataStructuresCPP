#pragma once
#include "BinarySearchTreeTest.h"
#include "TreeType.cpp"

void BinarySearchTreeTest::ExecuteTest()
{
	BinarySearchTree<int>* tree = new BinarySearchTree<int>();

	//FillBinarySearchTree(tree, 4);
	tree->InsertItem(50);
	tree->InsertItem(40);
	tree->InsertItem(100);
	tree->InsertItem(30);
	tree->InsertItem(45);

	//https://www.cppbuzz.com/programs/c++/implementation-of-binary-tree-using-template-in-c++
	cout << "BinarySearchTree->displayInOrder()" << endl;
	tree->displayInOrder();

	cout << endl;

	cout << "BinarySearchTree->displayPostOrder()" << endl;
	tree->displayPostOrder();


	cout << endl;

	cout << "BinarySearchTree->displayPreOrder()" << endl;
	tree->displayPreOrder();


	cout << endl;

	//tree->DeleteItem(40);


	cout << "Tree Size" << tree->NumberOfNodes() << endl;

	cout << "Tree Sum" << tree->SumOfNodes() << endl;
	cout << "Tree Leaf Sum" << tree->SumOfLeafNodes() << endl;
}
void BinarySearchTreeTest::Fill(BinarySearchTree<int>* binarySearchTree, int numberOfElements)
{
	int input;
	for (int index = 0; index < numberOfElements; index++)
	{
		cout << "Enter a integer" << endl;
		cin >> input;
		binarySearchTree->InsertItem(input);
		cout << "binarySearchTree->InsertItem(" << index << ")" << endl;
	}
}
void BinarySearchTreeTest::Fill(BinarySearchTree<int>* binarySearchTree, int numberArray[], int numberArraySize)
{
	for (int index = 0; index < numberArraySize; index++)
	{
		binarySearchTree->InsertItem(numberArray[index]);
	}
}
void BinarySearchTreeTest::Print(BinarySearchTree<int>* binarySearchTree)
{
	binarySearchTree->displayInOrder();

	cout << " Tree Size" << binarySearchTree->NumberOfNodes() << endl;
}
void BinarySearchTreeTest::InsertInto()
{
	BinarySearchTree<int>* binarySearchTree = new BinarySearchTree<int>();

	binarySearchTree->InsertItem(50);
	binarySearchTree->InsertItem(40);
	binarySearchTree->InsertItem(100);
	binarySearchTree->InsertItem(30);
	binarySearchTree->InsertItem(45);

	//https://www.cppbuzz.com/programs/c++/implementation-of-binary-tree-using-template-in-c++
	binarySearchTree->displayInOrder();
}
void BinarySearchTreeTest::SampleApplicationExit()
{
	cout << "Bye" << endl;
}
void BinarySearchTreeTest::SampleApplicationMenu()
{
	cout << "Press 1 for: Print Menu" << endl;
	cout << "Press 1 for: Print Menu" << endl;
	cout << "Press 5 for: Exit" << endl;
}
void BinarySearchTreeTest::SampleApplicationMain()
{
	BinarySearchTree<int>* binarySearchTree = new BinarySearchTree<int>();

	int menuSelection = 1;
	do
	{
		cin >> menuSelection;
		switch (menuSelection)
		{
		case 1: SampleApplicationMenu(); break;
		case 2: Print(binarySearchTree); break;
		case 3: InsertInto(); break;
		case 4: SampleApplicationExit(); break;
		default:menuSelection++;
		}
	} while (menuSelection != 5);
}
