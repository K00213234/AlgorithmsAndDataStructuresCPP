#pragma once

#include "QueueClass.h"
#include "StackClass.h"
#include "Pointers_UnSortedType.h"

void Fill(UnSortedType<int>* list);
void Print(UnSortedType<int>* list);
void FillQueue(QueueClass<int>* queue);
void FillStack(StackClass<int>* stack);
int main();
void TreeExampleTest();
void QueueTest();
void SearchQueue(QueueClass<int>* queue);
void SearchStack(StackClass<int>* stack);
void StackTest();
void LinkedListExample();


void PrintStackMethod(StackClass<int>* stack);
void SlightlyLessBadPrintStackMethod(StackClass<int>* stack);
void BadPrintStackMethod(StackClass<int>* stack);
