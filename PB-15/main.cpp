/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Swap Two Numbers.

# Breakdown:
Use temp variable

(https://www.programiz.com/cpp-programming/examples/swapping)
(https://www.geeksforgeeks.org/cpp-program-to-swap-two-numbers/)


Input:
None

# Variable(s)
int a
int b
int temp

Process:
temp = a
a = b
b = temp

# Dependency:
None

Output:
Numbers before swap
Numbers after swap
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 0;
    int temp;

    cout << "Numbers Before swap: " << "\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    temp = a;
    a = b;
    b = temp;

    cout << "Numbers After swap: " << "\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    return 0;
}
