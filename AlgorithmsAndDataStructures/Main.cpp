#pragma once

#include <iostream>
#include "Main.h"
#include "TreeType.cpp"
#include "QueueClass.cpp"
#include "LinkNode.cpp"
#include "Pointers_UnSortedType.cpp"
#include "StackTest.cpp"

using namespace std;

int main()
{
	(new StackTest())->ExecuteTest();
	//comment

//QueueTest();
	//LinkedListExample();


	BinarySearchTreeMain();
}

void SampleApplicationExit()
{
	cout << "Bye" << endl;
}
void SampleApplicationMenu()
{
	cout << "Press 1 for: Print Menu" << endl;
	cout << "Press 1 for: Print Menu" << endl;
	cout << "Press 5 for: Exit" << endl;
}
void SampleApplicationMain()
{
	BinarySearchTree<int>* binarySearchTree = new BinarySearchTree<int>();

	int menuSelection = 1;
do
{
		cin >> menuSelection;
		switch (menuSelection)
	{
		case 1: SampleApplicationMenu(); break;
		case 2: PrintTree(binarySearchTree); break;
		case 3: InsertIntoTree(); break;
		case 4: SampleApplicationExit(); break;
		default:menuSelection++;
	}
	} while (menuSelection != 5);

}

void BinarySearchTreeMain()
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
void FillBinarySearchTree(BinarySearchTree<int>* binarySearchTree, int numberOfElements)
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
void FillBinarySearchTree(BinarySearchTree<int>* binarySearchTree, int numberArray[], int numberArraySize)
{
	for (int index = 0; index < numberArraySize; index++)
	{
		binarySearchTree->InsertItem(numberArray[index]);
	}
}
void PrintTree(BinarySearchTree<int>* binarySearchTree)
{
	binarySearchTree->displayInOrder();

	cout << " Tree Size" << binarySearchTree->NumberOfNodes() << endl;
}
void InsertIntoTree()
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

void LinkedListExample()
{
	cout << "Queue Library" << endl;

	UnSortedType<int>* list = new UnSortedType<int>();
	Fill(list);

	Print(list);



	cout << "Program Finished" << endl;
}
void Fill(UnSortedType<int>* list)
{
	for (int index = 1; index < 100; index++)
	{
		list->insertItem(index);
		cout << "list->insertItem(" << index << ")" << endl;
	}
	UnSortedType<int>* list2 = new UnSortedType<int>();
	int item;
	list->resetListIterator();
	while (list->getNextItem(item))
	{
		list2->insertItem(item);
	}
}
void Print(UnSortedType<int>* list)
{
	list->resetListIterator();
	int item;

	while (list->getNextItem(item))
	{
		cout << item << " ";
	}

}

void QueueTest()
{
	cout << "Queue Library" << endl;

	QueueClass<int>* queue = new QueueClass<int>();
	FillQueue(queue);

	SearchQueue(queue);
	SearchQueue(queue);

	cout << "Program Finished" << endl;
}
void FillQueue(QueueClass<int>* queue)
{
	for (int index = 1; index < 100; index++)
	{
		queue->Enqueue(index);
		cout << "queue->Enqueue(" << index << ")" << endl;
	}
}
void SearchQueue(QueueClass<int>* queue)
{
	cout << "Enter a number to search for " << endl;
	int candidate;
	cin >> candidate;
	int index = queue->IndexOf(candidate);
	if (index != -1)
	{
		cout << "Found " << candidate << " at " << index << " in the queue." << endl;
		cout << "human friendly output" << endl;
		int number = index + 1;
		cout << "Found " << candidate << ". They are number " << number << " in the queue." << endl;
	}
	else
		cout << candidate << " is not in the queue." << endl;
}