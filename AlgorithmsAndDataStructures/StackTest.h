#pragma once

#include "StackClass.h"

class StackTest
{
public:
	StackTest();
	~StackTest();
#pragma region Methods
#pragma endregion
	void BadPrintMethod(StackClass<int>* stack);
	void ExecuteTest();
	void Fill(StackClass<int>* stack);
	void Print(StackClass<int>* stack);
	void Search(StackClass<int>* stack);
	void SlightlyLessBadPrintMethod(StackClass<int>* stack);
};