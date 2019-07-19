/*
Jatnael Montes

ID: 0508989

September 9, 2018

Assignment 5 - The Conditional Operator

This is lab (assignment) 5 that will take in a whole number then using the conditional operator determine if the number is odd or even.
*/


#include <iostream>
#include <string>

using namespace std;
int main()
{
	int number;//number we will use
	cout << "Enter a number and I will check to see if it is odd or even" << endl;
	cin >> number; //assign input to number
	string str;
	number % 2 == 0 ? str = "Even" : str = "Odd"; //conditonal operator
	cout << "The number you inputted is " << str << endl;
}
