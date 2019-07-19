#include <iostream>

using namespace std;

void printX();
void getX();
int x = 0;
int main(){
    getX();
    printX();
    //Global Variables are a bad thing because they can be modified/changed by any part of the program, so it can be hard to keep track of the value of the variable at a given moment
    return 0;
}
void printX(){
 cout << "The value of x is " << x << endl;
}
void getX(){
 int x;
 cout << "Enter a value for x " << endl;
 cin >> x;
}
