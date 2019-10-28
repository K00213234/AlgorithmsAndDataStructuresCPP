// StackLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StackClass.cpp"
#include "Main.h"

using namespace std;

int main()
{
	cout << "Stack Library" << endl;

	StackClass<int>* stack = new StackClass<int>();
	FillStack(stack);
	SearchStack(stack);
	SearchStack(stack);

	cout << "Program Finished" << endl;
}

void SearchStack(StackClass<int>* stack)
{
	int candidate;
	cin >> candidate;
	if (stack->Contains(candidate))
		cout << "Found " << candidate << " in the stack." << endl;
	else
		cout << candidate << " is not in the stack." << endl;
}

void FillStack(StackClass<int>* stack)
{
	for (int index = 1; index < 100; index++)
	{
		stack->Push(index);
	}
}