/*
Name: Prabhdeep Singh
Date: 09/03/2004

Program:
C++ program to print Even numbers up to 100.

# Breakdown:
- How to check if number is even
The Modulo operator returns the remainder when divided by any number so,
we will evaluate the x%2, and if the result is 0 a number is even otherwise it is an odd number.

(https://www.geeksforgeeks.org/python-program-to-check-if-a-number-is-odd-or-even/)

- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)



- For loop
for ( int i = 0; i < arraySize; i++ ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_for_loop.asp)


Input:
None

# Variable(s)
range = 100

# Method
None

Input:


Process:


Output:


Return:


Process:
> For loop until range=100 is reached
    > Check
    if
        number/iteration % 2 has remainder of 0
        iteration -> i % 2 == 0
    then
        number/iteration is even
        Output number/iteration + "\n"


#Dependency:
None

Output:
Output even number from 0 to 100 inclusive
*/


#include <iostream>

using namespace std;

int main()
{
    int range = 100;

    for( int i = 0; i <= 100; i++ ) {

        if( i%2 == 0 ) {

            cout << i << "\n";
        }

    }

    return 0;
}
