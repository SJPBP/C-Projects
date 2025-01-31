/*
Name: Prabhdeep Singh
Date: 09/14/2024

Program:
Factorial Calculator: Write a program that calculates the factorial of a given positive integer.
Factorial of a number is the product of all positive integers from 1 to that number.


# Breakdown:
- How to calculate the factorial of a number
The value n! is called "n factorial" and is calculated by following formula:

n! = n × (n - 1) × (n - 2) × . . . × 1  ,  n > 0

By convention, 0! = 1

For example, the factorial of 7 is equal to 7×6×5×4×3×2×1 = 5040.

(https://goodcalculators.com/factorial-calculator/)
(https://www.calculatorsoup.com/calculators/discretemathematics/factorials.php)


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
int numberZeroFactorial = 1
int number = user
int sum = 1

# Method
None

Input:


Process:


Output:


Return:


Process:
- Get number from user
    - Please enter a positive intger:
- Check
if
    number is zero
then
    Output
    Factorial of (input number) is 1
else
    - For loop starting from 1 to number inclusive
        - number = 10
            for 1 to 10
                sum *= i
    - Output the sum as Factorial
    - Factorial of 10 (input number) is 3,628,800


# Dependency:
None

Output:
Factorial Number
*/
#include <iostream>

using namespace std;

int main()
{
    int numberZeroFactorial = 1;
    int sum = 1;
    int number;

    cout << "Please enter a positive integer: ";
    cin >> number;
    cout << "\n";

    if( number == 0 ) {

        cout << "Factorial of " << number << " is " << numberZeroFactorial;
    }
    else {

        for( int i = 1; i <= number; i++ ) {

            sum *= i;
        }

        cout << "Factorial of " << number << " is " << sum;
    }
    return 0;
}
