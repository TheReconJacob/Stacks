#include "Stack1.h"

Stack1::Stack1(int maxSize) {
    this->maxSize = maxSize;
    stackData = new int[maxSize];
    top = -1;
}

void Stack1::Push(int value) {
    top++;
    stackData[top] = value;
}

int Stack1::Pop() {
    int value = stackData[top];
    top--;
    return value;
}

int Stack1::Peek() {
    return stackData[top];
}

bool Stack1::IsEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

bool Stack1::IsFull() {
    if (top == (maxSize - 1))
        return true;
    else
        return false;
}