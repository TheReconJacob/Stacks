#pragma once
class LinkedStack {
private:
    struct StackElement {
        int data;
        StackElement* next;
        StackElement(int data);
    };
    StackElement* top;

public:
    bool IsEmpty();
    int Peek();
    int Pop();
    void Push(int value);
    LinkedStack();
};