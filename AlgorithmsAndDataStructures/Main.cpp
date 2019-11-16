#include <iostream>
#include "Main.h"
#include "TreeType.cpp"
#include "StackClass.cpp"
#include "QueueClass.cpp"
#include "LinkNode.cpp"
#include "Pointers_UnSortedType.cpp"

using namespace std;

int Stack_Size = 109;


void Exit()
{
	/*int option = 1;
do
{
	cin >> option;
	switch (option)
	{
	case 1: option++; break;
	case 2: option++; break;
	case 3: option++; break;
	case 4: Exit(); break;
	default:option++;
	}
} while (option != 4);*/
//StackTest();

	cout << "bye";
}
int main()
{
	//comment

//QueueTest();
	//LinkedListExample();


	TreeExampleTest();
}
void TreeExampleTest()
{
	TreeType<int>* tree = new TreeType<int>();

	tree->InsertItem(50);
	tree->InsertItem(40);
	tree->InsertItem(100);
	tree->InsertItem(30);
	tree->InsertItem(45);

	//https://www.cppbuzz.com/programs/c++/implementation-of-binary-tree-using-template-in-c++
	tree->displayInOrder();



	tree->DeleteItem(40);
	tree->displayInOrder();
}
void LinkedListExample()
{
	cout << "Queue Library" << endl;

	UnSortedType<int>* list = new UnSortedType<int>();
	Fill(list);

	Print(list);



	cout << "Program Finished" << endl;
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
