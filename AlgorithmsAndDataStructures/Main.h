#pragma once

#include "QueueClass.h"
#include "TreeType.h"
#include "Pointers_UnSortedType.h"

int main();

void LinkedListExample();
void Fill(UnSortedType<int>* list);
void Print(UnSortedType<int>* list);

void BinarySearchTreeMain();
void FillBinarySearchTree(BinarySearchTree<int>*, int);
void FillBinarySearchTree(BinarySearchTree<int>*, int [], int );
void PrintTree(BinarySearchTree<int>*);
void InsertIntoTree();

void QueueTest();
void FillQueue(QueueClass<int>* queue);
void SearchQueue(QueueClass<int>* queue);
void FillBinarySearchTree(BinarySearchTree<int>*, int);
