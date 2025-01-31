/*
Name: Prabhdeep Singh
Date: mm/dd/yyyy

Program:
C++ Program to Display Prime Numbers Between Two Intervals.


# Breakdown:
- How to check if number is prime

> A number is not prime if it's divided by another number than 1 or itself.

> To check
    if
        number is prime or not, divide from 2 to half of the number (n/2)
    then
        number is not a prime

(https://www.programiz.com/cpp-programming/examples/prime-number)


- Display Prime Numbers Between Two Intervals

> Check for all numbers Between Two Intervals using above method

- Display all prime numbers from 2 to 10

> Check for
    if
        number = 2, 3, ..., 10 is prime
    then
        Output number is prime


- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


- Arrays
type arrayName[size] = { elements }

> char vowels[5] =  { A, E, I, O, U }

(https://www.w3schools.com/cpp/cpp_arrays.asp)


- Constant
const type varaibleName

> const char vowels[5]

(https://www.w3schools.com/cpp/cpp_variables_constants.asp)


- foreach Loop
for( auto i : vowels ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_for_loop_foreach.asp)


- For loop
for ( int i = 0; i < arraySize; i++ ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_for_loop.asp)


- Logical Operators e.g. OR, AND, NOT
&&  	Logical and
||  	Logical or
! 	    Logical not

(https://www.w3schools.com/cpp/cpp_operators_logical.asp)


- How to use switch
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

(https://www.w3schools.com/cpp/cpp_switch.asp)

Input:
(int)
startNumber
endNumber

# Variable(s)
(int)
startNumber, endNumber

(bool)
isPrime

# Method
isPrimeNumber

Input:
int number

Variable(s):
(int)
number

(bool)
isPrime = true

Process:
- for loop from 2 to number
    - Check if
            number is modulo by iteration equal 0
                - if ( number % i == 0 )
        then
            number is not prime and
            isPrime is false

Output:
None

Return:
isPrime

Process:
> Ask user for startNumber and endNumber
> Check if
        *startNumber* is less than or equal 1
    then
        Output
        - No prime number found between *startNumber* and *endNumber*
> Else
    Loop through startNumber and endNumber
        - send iteration to isPrimeNumber
            isPrime = isPrimeNumber(i)
        - Check if
                    isPrime == true
                then
                    Output the number


# Dependency:
None

Output:
Numbers that are prime between two intervals

*/

#include <iostream>

using namespace std;

int isPrimeNumber(int number);

int main()
{
    int startNumber, endNumber;
    bool isPrime;

    // Get start and end number
    cout << "Please enter the positive start number of interval: ";
    cin >> startNumber;

    cout << "Please enter the positive end number of interval: ";
    cin >> endNumber;

    cout << "\n";

    // Number is not prime if end number is less than or equal 1
    if( endNumber <= 1 ) {
        cout << "There is no prime number between " << startNumber << " and " << endNumber << "\n";

    }
    else {
        cout << "The prime numbers between " << startNumber << " and " << endNumber << " are:\n";

        for( int i = startNumber; i <= endNumber; i++ ){
            isPrime = isPrimeNumber(i);

            if( isPrime == true ) {
                cout << i << "\n";

            }

        }

    }

    return 0;
}

int isPrimeNumber(int number) {

    bool isPrime = true;

    if( number <= 1 ) {
        isPrime = false;

    }

    for( int i = 2; i <= number/2; i++ ) {

        if( number % i  == 0 ) {

            isPrime = false;
        }
    }

    return isPrime;
}
