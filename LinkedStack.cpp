#include "LinkedStack.h"

LinkedStack::StackElement::StackElement(int data) : data(data), next(0) {}

LinkedStack::LinkedStack() {
    top = 0;
}

void LinkedStack::Push(int value) {
    StackElement* newElement = new StackElement(value);
    newElement->next = top;
    top = newElement;
}

int LinkedStack::Pop() {
    int value = top->data;
    StackElement* temp = top;
    top = top->next;
    delete temp;
    return value;
}

int LinkedStack::Peek() {
    return top->data;
}

bool LinkedStack::IsEmpty() {
    return top == 0;
}