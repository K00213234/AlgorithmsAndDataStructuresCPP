#pragma once

#include <iostream>
#include "Main.h"
#include "StackTest.cpp"
#include "QueueTest.cpp"
#include "BinarySearchTreeTest.cpp"
#include "LinkedListTest.cpp"

using namespace std;

int main()
{
	(new StackTest())->ExecuteTest();
	(new QueueTest())->ExecuteTest();
	(new BinarySearchTreeTest())->ExecuteTest();
	(new LinkedListTest())->ExecuteTest();
}