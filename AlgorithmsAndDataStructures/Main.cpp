#include <iostream>
#include "Main.h"
#include "StackClass.cpp"
#include "QueueClass.cpp"
#include "LinkNode.cpp"

using namespace std;

int Stack_Size = 109;


int main()
{
	//StackTest();
	//comment

	QueueTest();

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

void StackTest()
{
	cout << "Stack Library" << endl;

	StackClass<int>* stack = new StackClass<int>();
	FillStack(stack);
	SearchStack(stack);
	PrintStackMethod(stack);

	SearchStack(stack);

	PrintStackMethod(stack);
	//PrintStackMethod(stack);

	//BadPrintStackMethod(stack);
	//PrintStackMethod(stack);
	//SlightlyLessBadPrintStackMethod(stack);

	cout << "Program Finished" << endl;
}

void PrintStackMethod(StackClass<int>* stack)
{
	cout << "Stack Contents";
	stack->Print();
}

void SlightlyLessBadPrintStackMethod(StackClass<int>* stack)
{
	StackClass<int>* stackBackup = new StackClass<int>();
	//string output = "";
	int item;
	cout << "Stack Contents";
	while (!stack->IsEmpty())
	{
		stack->Pop(item);
		cout << item << " ";
		stackBackup->Push(item);
	}
	cout << endl;

	cout << "backup" << endl;
	stackBackup->Print();
	cout << "orignal" << endl;
	stack->Print();

	while (!stackBackup->IsEmpty())
	{
		stackBackup->Pop(item);
		stack->Push(item);
	}
	cout << "backup" << endl;
	stackBackup->Print();
	cout << "orignal" << endl;
	stack->Print();


}
void BadPrintStackMethod(StackClass<int>* stack)
{
	//string output = "";
	int item;
	cout << "Stack Contents";
	while (!stack->IsEmpty())
	{
		stack->Pop(item);
		cout << item << " ";
	}
	cout << endl;
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


void SearchStack(StackClass<int>* stack)
{
	cout << "Enter a number to search for " << endl;
	int candidate;
	cin >> candidate;
	if (stack->Contains(candidate))
		cout << "Found " << candidate << " in the stack." << endl;
	else
		cout << candidate << " is not in the stack." << endl;
}

void FillStack(StackClass<int>* stack)
{
	for (int index = 1; index < Stack_Size; index++)
	{
		stack->Push(index);
	}
}
