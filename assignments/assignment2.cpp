/*
Jatnael Montes

ID: 0508989

August 26, 2018

Assignment 2 - Creating Variables

This is lab (assignment) 2 which takes in a char then increments it by 1, takes in a double and decrements it by 2, and takes an integer (int) and squares it. It then outputs our results to the console window (screen)
*/
#include <iostream>
using namespace std;
int main()
{
    //Create the 3 Variables
    char theChar;
    double theDouble;
    int theInt;

    //Get Input from Keyboard, then assign to a variable we just created
    cout << "Enter a Char, a Double, and a Int " << endl; //lower case data types become highlighted, hence why I made them capital in this case
    cin >> theChar >> theDouble >> theInt; //assigns input to respective variables

    //Actual Math
    theChar = theChar + 1; //increase theChar by 1
    theDouble = theDouble - 2; //decrease theDouble by 2
    theInt = theInt * theInt; //square theInt

    //Output
    cout << "theChar: " << theChar << endl;
    cout << "theDouble: " << theDouble << endl;
    cout << "theInt: " << theInt << endl; //endl isn't techinally needed here since it is the end of our output

 return 0;
}
