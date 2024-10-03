/*
Name: Prabhdeep Singh
Date: 08/28/2024

Program:
C++ Program to find the Largest Number Among Three Numbers.

# Breakdown:
1. How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)

2. Arrays
int threeNumbers[3] = {2, 0, 1000}


3. for loop

for ( int i = 0; i < arraySize; i++ ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_arrays_loop.asp)

4. Find the Largest Number Among Three Numbers
For Loop through array int threeNumbers
if
    current number is bigger than int largestNumber
    current number > int largestNumber
then
    assign current number to int largestNumber
    int largestNumber = current number


Input:
None

# Variable(s)
int threeNumbers[3] = {2, 0, 1000}
int largestNumber = 0

# Method
None

Input:
None

Process:
None

Output:
None

Return:
None

Process:
1. For loop through threeNumbers
if
    current number "i" > largestNumber
then
    largestNumber = i

2. Outside the for-loop, output largestNumber

# Dependency:
None

Output:
Which number is largestNumber
*/
#include <iostream>

using namespace std;

int main()
{
    int threeNumbers[3] = {2, 22, 10};
    int largestNumber = 0;

    for( int i = 0; i < 3; i++ ) {

        if( threeNumbers[i] > largestNumber ) {

            largestNumber = threeNumbers[i];

        }
    }

    cout << "Largest number is: " << largestNumber;

    return 0;
}
