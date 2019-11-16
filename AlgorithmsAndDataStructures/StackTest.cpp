#pragma once

#include "StackTest.h"
#include "StackClass.cpp"
#include <iostream>

using namespace std;

StackTest::StackTest()
{
}
StackTest::~StackTest()
{
}
void StackTest::BadPrintMethod(StackClass<int>* stack)
{
	int item;
	cout << "Stack Contents" << endl;
	while (!stack->IsEmpty())
	{
		stack->Pop(item);
		cout << item << " ";
	}
	cout << endl;
}
void StackTest::ExecuteTest()
{
	cout << "Stack Test" << endl;

	StackClass<int>* stack = new StackClass<int>();

	Fill(stack);
	Search(stack);
	Print(stack);

	Search(stack);

	Print(stack);

	BadPrintMethod(stack);
	Print(stack);
	SlightlyLessBadPrintMethod(stack);

	cout << "Program Finished" << endl;
}
void StackTest::Fill(StackClass<int>* stack)
{
	int Stack_Size = 109;

	for (int index = 1; index < Stack_Size; index++)
	{
		stack->Push(index);
	}
}
void StackTest::Print(StackClass<int>* stack)
{
	cout << "Stack Contents" << endl;
	stack->Print();
}
void StackTest::Search(StackClass<int>* stack)
{
	cout << "Enter a number to search for " << endl;
	int candidate;
	cin >> candidate;
	if (stack->Contains(candidate))
		cout << "Found " << candidate << " in the stack." << endl;
	else
		cout << candidate << " is not in the stack." << endl;
}
void StackTest::SlightlyLessBadPrintMethod(StackClass<int>* stack)
{
	StackClass<int>* stackBackup = new StackClass<int>();

	int item;
	cout << "Stack Contents" << endl;
	while (!stack->IsEmpty())
	{
		stack->Pop(item);
		cout << item << " ";
		stackBackup->Push(item);
	}
	cout << endl;

	cout << "Backup Stack" << endl;
	stackBackup->Print();
	cout << "Original Stack:" << endl;
	stack->Print();

	while (!stackBackup->IsEmpty())
	{
		stackBackup->Pop(item);
		stack->Push(item);
	}
	cout << "Backup Stack:" << endl;
	stackBackup->Print();
	cout << "Original Stack:" << endl;
	stack->Print();
}