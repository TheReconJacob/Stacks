template <typename T>
class Stack2 {
private:
    int maxSize;
    T* stackData;
    int top;

public:
    bool IsEmpty();
    bool IsFull();
    T Peek();
    T Pop();
    void Push(T value);
    Stack2(int maxSize);
};

#include "Stack2.tpp"