/*
Name: Prabhdeep Singh
Date: 12/07/2024

Program: 
C++ Program to Reverse a Sentence using recursion function

*/

#include <iostream>
#include <string>

using namespace std;

string reverseSentence(string sentence);

int main() {
  string sentence;
  
  // Get the sentence
  cout << "Please enter a sentence: ";
  getline(cin, sentence);

  // Exit if no word is entered
  if( sentence.length() == 0 ){
    cout << "Error: Please enter a letter\n";
    return -1;
  }

  // Before reversing the sentence
  cout << "Before: " << sentence << "\n";

  // Reverse the string
  sentence = reverseSentence(sentence);
  
  // After reversing the sentence
  cout << "After: " << sentence << "\n";

  return 0;
}
