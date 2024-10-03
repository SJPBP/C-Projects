/*
Name: Prabhdeep Singh
Date: 08/28/2024

Program:
C++ Program to Check Whether a Character is a Vowel or Consonant.

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

2. Check Whether a Character is a Vowel or Consonant
if
    character equals { A, E, I, O, U }
then
    character is Vowel
else
    character is Consonant

(https://www.geeksforgeeks.org/program-find-character-vowel-consonant/)

3. Arrays
I am using array because Vowel are determined

type arrayName[size] = { elements }

char vowels[5] =  { A, E, I, O, U }

4. Constant
Vowel can't be changed so I will make the array constant

const char vowels[5]


5. foreach Loop
I could use for loop but I think foreach loop with auto is better because it decrease chances for bug


for( auto i : vowels ) {
    // code
}

// Note
Use for loop

for ( int i = 0; i < arraySize; i++ ) {
    // code
}

(https://www.w3schools.com/cpp/cpp_arrays_loop.asp)

Input:
Ask for integer number

# Variable(s)
char character
bool isVowel

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
1. Ask for input
2. Use for loop to check input char character against vowels
    if
        char character == one of element of vowels
    then
        isVowel is true
    else
        Nothing

# Dependency:
None

Output:
Character is vowels/consonant
*/
#include <iostream>

using namespace std;

int main()
{
    char character;
    bool isVowel = false;
    char vowels[5] = { 'a', 'e', 'i', 'o', 'u'};

    // Get character from user
    cout << "Please enter a character (e.g. a-z): ";
    cin >> character;
    cout << "\n";

    // loop through vowels array to see if it has character
    for( int i = 0; i < 5; i++ ) {

        if( character == vowels[i]) {

            isVowel = true;

        }
    }

    if( isVowel == true ) {

        cout << "Character is a vowels\n";

    }
    else {

        cout << "Character is a consonant\n";

    }

    return 0;
}
