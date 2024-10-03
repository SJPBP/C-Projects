/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Find the Size of int, float, double, and char.

# Breakdown:
Example of using sizeof to get size

(https://www.geeksforgeeks.org/cpp-program-to-find-the-size-of-int-float-double-and-char/)

Input:
None

# Variable(s)
int intVar;
char charVar;
float floatVar;
double doubleVar;

Process:
None

# Dependency:
None

Output:
Output the size of int, float, double, and char variables
*/
#include <iostream>

using namespace std;

int main()
{
    int intVar;
    char charVar;
    float floatVar;
    double doubleVar;

    cout << "Size of int: " << sizeof(intVar) << endl;
    cout << "Size of char: " << sizeof(charVar) << endl;
    cout << "Size of float: " << sizeof(floatVar) << endl;
    cout << "Size of double: " << sizeof(doubleVar) << endl;

    return 0;
}
