#include <iostream>
#include "Main.h"
#include "StackClass.cpp"
#include "QueueClass.cpp"
#include "LinkNode.cpp"

using namespace std;

int main()
{
	StackTest();
	//comment

	//QueueTest();

}

void QueueTest()
{
	cout << "Queue Library" << endl;

	QueueClass<int>* queue = new QueueClass<int>();
	FillQueue(queue);

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
	SearchStack(stack);

	PrintStackMethod(stack);
	PrintStackMethod(stack);

	BadPrintStackMethod(stack);
	PrintStackMethod(stack);

	cout << "Program Finished" << endl;
}

void PrintStackMethod(StackClass<int>* stack)
{
	cout << "Stack Contents";
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
	for (int index = 1; index < 100; index++)
	{
		stack->Push(index);
	}
}