#pragma once
#include "LinkedListTest.h"
#include "Pointers_UnSortedType.cpp"
#include <iostream>

using namespace std;

void LinkedListTest::ExecuteTest()
{
	cout << "UnSortedType Library Test" << endl;
	UnSortedType<int>* list = new UnSortedType<int>();
	Fill(list);
	Print(list);

	cout << "Program Finished" << endl;
}
void LinkedListTest::Fill(UnSortedType<int>* list)
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
void LinkedListTest::Print(UnSortedType<int>* list)
{
	list->resetListIterator();
	int item;
	while (list->getNextItem(item))
	{
		cout << item << " ";
	}
}