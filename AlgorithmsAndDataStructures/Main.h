#pragma once

#include "QueueClass.h"
#include "StackClass.h"

void FillQueue(QueueClass<int>* queue);
void FillStack(StackClass<int>* stack);
void QueueTest();
void SearchStack(StackClass<int>* stack);
void StackTest();

void PrintStackMethod(StackClass<int>* stack);
void BadPrintStackMethod(StackClass<int>* stack);
