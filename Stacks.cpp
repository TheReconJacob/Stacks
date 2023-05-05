// Stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack2.h"

int main() {
    Stack2<int> stackTwoInt(4);

    stackTwoInt.Push(1);
    stackTwoInt.Push(2);
    stackTwoInt.Push(3);
    stackTwoInt.Push(4);

    while (!stackTwoInt.IsEmpty()) {
        std::cout << stackTwoInt.Pop() << std::endl;
    }

    Stack2<float> stackTwoFloat(4);
    stackTwoFloat.Push(1.0f);
    stackTwoFloat.Push(2.0f);
    stackTwoFloat.Push(3.0f);
    stackTwoFloat.Push(4.0f);

    while (!stackTwoFloat.IsEmpty()) {
        std::cout << stackTwoFloat.Pop() << std::endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
