// Pointers_SortedTypeTest.cpp
#include <iostream>
#include "Pointers_UnSortedType.h"
#include "ItemType.h"
using namespace std;
int main()
{
	ItemType list[6], temp;
	list[0].initialise(1, "The X-files", 23);	list[1].initialise(2, "ER", 34);
	list[2].initialise(3, "Furtrarama", 9);		list[3].initialise(4, "Stargate", 7);
	list[4].initialise(5, "StarTrek", 8);		list[5].initialise(6, "Simpsons", 23);
	// Tests the Constructor
	UnSortedType<ItemType> list1;
	// Tests ths isFull() and lengthIs() functions
	cout << "\nThe List has " << list1.lengthIs() << " Items.\nThe list is ";
	if(!list1.isFull()) cout << "not ";
	cout << "Full." << endl;
	// Tests the insertItem(item) function
	for(int i = 0; i < 6; i++)
	{
		if(list1.isFull())
		{
			cerr << "\nThe List is full.\n";	break;
		}
		list1.insertItem(list[i]);
	}
	// Tests the deleteItem(item) function
	list1.deleteItem(list[1]);
	// Tests the isThere(item) and retrieveItem(item) functions
	cout << "\nThe X-files book is ";
	if(!list1.retrieveItem(list[0])) cout << "not ";
	cout << "sold.\nThe ER book is ";
	if(!list1.isThere(list[1]))	cout << "not ";
	cout << "sold." << endl << endl;
	// Tests the resetList() and getNextItem(item) functions
	list1.resetList();
	while(list1.getNextItem(temp))	temp.print();
	cout << "\nThe last Item in the list is\n"; temp.print();
	// Test the makeEmpty() function
	list1.makeEmpty();
	list1.resetList();
	while(list1.getNextItem(temp))	temp.print();
	if(list1.lengthIs() == 0)	cout << "The List has been  Emptied" << endl;
	cout << endl;
	return 0;
}