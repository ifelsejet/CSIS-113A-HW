/*
Jatnael Montes

ID: 0508989

October 28, 2018

Assignment 13 - Using References

This is lab (assignment) 13 which will decode a nine character string into three separate int value codes.
*/

#include <iostream>
#include <string>

using namespace std;

bool decode( string &s, int &a, int &b, int &c ); //4 parameters

int main() {
string sequence = ""; //create string variable
int a, b, c; //number variables
cout << "Enter a sequence to decode" << endl;
cin >> sequence; //get input
if (decode( sequence, a, b, c )) {
cout << "Num1: " << a << endl;
cout << "Num2: " << b << endl;
cout << "Num3: " << c << endl;
}
else {
cout << "Invalid input." << endl;
}
return 0;
}
//Decode Function
bool decode(string &s, int &a, int &b, int &c) {//4 parameters
if (s.length() != 9){
return false;
}//if not 9, return false
 a = 0;
 b = 0;
 c = 0;
for (int i = 0; i < 3; i++) { //string -> number
a+=s[i];
b+=s[i+3];
c+=s[i+6];
}//end of for loop
}
