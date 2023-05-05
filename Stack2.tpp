template <typename T>
Stack2<T>::Stack2(int maxSize) {
    this->maxSize = maxSize;
    stackData = new T[maxSize];
    top = -1;
}

template <typename T>
void Stack2<T>::Push(T value) {
    top++;
    stackData[top] = value;
}

template <typename T>
T Stack2<T>::Pop() {
    T value = stackData[top];
    top--;
    return value;
}

template <typename T>
T Stack2<T>::Peek() {
    return stackData[top];
}

template <typename T>
bool Stack2<T>::IsEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

template <typename T>
bool Stack2<T>::IsFull() {
    if (top == (maxSize - 1))
        return true;
    else
        return false;
}