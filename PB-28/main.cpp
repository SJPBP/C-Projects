/*
Name: Prabhdeep Singh
Date: 09/1/2024

Program:
C++ Program to Check Whether a Character is an Alphabet or not.


# Breakdown:
- How to Check Whether a Character is an Alphabet or not.
if the ASCII value of the character entered by the user,
    lies in the range of 97 to 122 or from 65 to 90, that number is an alphabet.

> if
    97 <= character > 122 OR 65 <= character > 90
then
    character is Alphabet

(https://www.programiz.com/c-programming/examples/alphabet)


- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


Input:
character (char)

# Variable(s)
char character

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask user for character
- Check
if
    (97 <= character && character > 122) || (65 <= character && character > 90)
then
    character is a Alphabet
else
    character is not a Alphabet

# Dependency:
None

Output:
character is Alphabet OR not
*/
#include <iostream>

using namespace std;

int main()
{
    char character;

    cout << "Please enter a character: ";
    cin >> character;
    cout << "\n";

    if( (97 <= character && character > 122) || (65 <= character && character > 90 ) ) {

        cout << "Character: " << character << " is a Alphabet" << "\n";
    }
    else {

        cout << "Character: " << character << " is not a Alphabet" << "\n";
    }

    return 0;
}
