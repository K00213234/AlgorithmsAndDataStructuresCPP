#pragma once
#include "QueueTest.h"
#include "QueueClass.cpp"
#include <iostream>

using namespace std;
void QueueTest::ExecuteTest()
{
	cout << "Queue Test Library" << endl;

	QueueClass<int>* queue = new QueueClass<int>();
	Fill(queue);

	Search(queue);
	Search(queue);

	cout << "Program Finished" << endl;
}
void QueueTest::Fill(QueueClass<int>* queue)
{
	for (int index = 1; index < 100; index++)
	{
		queue->Enqueue(index);
		cout << "queue->Enqueue(" << index << ")" << endl;
	}
}
void QueueTest::Search(QueueClass<int>* queue)
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
	{
		cout << candidate << " is not in the queue." << endl;
	}
}