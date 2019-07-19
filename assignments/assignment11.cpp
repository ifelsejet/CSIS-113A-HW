/*
Jatnael Montes

ID: 0508989

October 14, 2018 

Assignment 11 - Functions, Loops, and Decisions

This is lab (assignment) 11 which will use a funtion to return the sum of all the consonants between the starting and ending character of two upper case letters 
*/

#include <iostream>
using namespace std;

int sumConsonants(char, char);

int main()
{
  char char1; 
  char char2;
  cout << "Enter two upper case chars" << endl;
  cin >> char1 >> char2;

  cout << "The sum of the consonants between the two chars is " << sumConsonants(char1, char2) << endl;


  return 0;
}

int sumConsonants(char firstV, char lastV)
{
    const string vowels = "AEIOU";
    int result = 0;
    for (char ch = firstV; ch <= lastV; ch++)
        if (vowels.find(ch) == string::npos)
            result += ch;
    return result;
}