/*
Name: Prabhdeep Singh
Date: 09/07/2024

Program:
C++ program to Generate a Multiplication Table.


# Breakdown:
- How to generate a Multiplication Table

> If number = 10
> And the multiplication table is set to 10
> Then multiple 10 from 1 to 10

> 10 * i = result

(https://www.programiz.com/c-programming/examples/multiplication-table)

- How to get the type of a variable
To check if variable is a integer
> typeid(var).name() == 'i'

(https://www.codespeedy.com/get-the-type-of-a-variable-in-cpp/)

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
number (int)

# Variable(s)
int number

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask user for a number who's Multiplication Table will generated
- Loop through 1 to 10 inclusive
    - Output:
    number * i = result
    10 * 1 = 10
    ...
    10 * 10 = 100

# Dependency:
None

Output:
Error/Multiplication Table of input number
*/
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "\n";

    for( int i = 1; i <= 10; i++ ) {

        // number * i = result
        cout << number << " * " << i << " = " << number * i << "\n";
    }

    return 0;
}
