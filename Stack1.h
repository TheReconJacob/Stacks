#pragma once
class Stack1
{
private:
	int maxSize;
	int* stackData;
	int top;

public:
	bool IsEmpty();
	bool IsFull();
	int Peek();
	int Pop();
	void Push(int value);
	Stack1(int maxSize);
};