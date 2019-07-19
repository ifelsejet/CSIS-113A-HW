/*
Jatnael Montes

ID: 0508989

September 2, 2018

Assignment 4 - Making Decisions

This is lab (assignment) 4 that will calculate the amount of money that should be paid to employees based off the total number of miles
*/

#include <iostream>

using namespace std;
int main()
{
    //create variables
    int miles;
    double totalCost;
    cout<< "Enter the number of miles driven " << endl; //get input from keyboard
    cin >> miles;//set input to variable "miles"
    if(miles <= 100)//if the number of miles is less than or equal to 100, multiply the number by miles by .25
    {
        totalCost = miles * .25;
    }

    else if (miles > 100)//if the number of miles exceeds 100, multiply 100 miles by .25 then multiply by .15 for every mile over 100, then add it
    {
        totalCost = (100 * .25) + ((miles - 100) * .15); //going off the example (.25*100) + (.15 * 15), .25 and 100 are literal values, we subract our input,miles, and subtract it by 100 to find the number of miles over 100, then multiply it by .15
    }

    cout << "You are owed " << totalCost << " dollars" <<endl;//display result to screen

  return 0;
}
