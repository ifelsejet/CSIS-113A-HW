/*
Jatnael Montes

ID: 0508989

October 28, 2018

Assignment 14 - Overloaded Functions

This is lab (assignment) 14 which will decode 2 character strings into integer values, and find the sum of the values
*/

#include <iostream>
#include <string>

using namespace std;

int sumAscii(string &sequenceString1);
int sumAscii(string &sequenceString1, string &sequenceString2);

int main()
{
//create string variables
string myString1 = "";
string myString2 = "";
//Get input
cout << "Enter two strings " << endl;
cin >> myString1 >> myString2;

int sum = sumAscii(myString1, myString2);//get sum

cout << "The sum of the ASCII characters in both strings is " << sum << endl;

return 0;

}
int sumAscii(string &sequenceString1)//1st function
{
int sum = 0;//create sum varibale
for (int characters = 0; characters < sequenceString1.length(); characters++)
sum += sequenceString1[characters];
return sum;
}
int sumAscii (string &sequenceString1, string &sequenceString2)//2nd function
{
return sumAscii(sequenceString1) + sumAscii(sequenceString2);
}
