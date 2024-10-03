/*
Name: Prabhdeep Singh
Date: 10/02/2024

Program:
Program to print stars Sequence1.
*
**
***
****
*****

# Breakdown:
- Multiple the output of a character
string(number, character)

> Above function takes number of times to output and the character to output

(https://www.geeksforgeeks.org/print-a-character-n-times-without-using-loop-recursion-or-goto-in-cpp/#)

- For loop
for ( int i = 0; i < arraySize; i++ ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_for_loop.asp)


Input:
None

# Variable(s)
(int)
height = 5

# Method
None

Input:


Process:


Output:


Return:


Process:
> For loop from 1 to height inclusive
    > Output using string(current_iteration, '*')

# Dependency:
None

Output:
Output the stars Sequence1

*/

#include <iostream>

using namespace std;

int main()
{
    int height = 5;

    // Output stars from 1 to height inclusive
    // Number of stars are iteration between 1 to height

    /* For Problem 39
    for( int i = 1; i <= height; i++ ) {
        cout << string(height - i, ' ');
        cout << string(i, '*') << endl;

    }
    */

    for( int i = 1; i <= height; i++ ) {
        cout << string(i, '*') << endl;

    }
    return 0;
}

