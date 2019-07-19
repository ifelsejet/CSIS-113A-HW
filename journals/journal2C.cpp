#include <iostream>

using namespace std;
int main()
{
 int value1;
 int value2;
 int choice;
 cout << "Please enter a value " << endl;
 cin >> value1;
 cout << "Please enter another value" <<endl;
 cin >> value2;

 cout << "Enter an operation" << endl;
 cout << "1. Add Values" << endl;
 cout << "2. Subtract Values" << endl;
 cout << "3. Multiply Values" << endl;
 cout << "4. Divide Values" << endl;
 cin>> choice;

 switch(choice) {
     case 1:
     cout<< "The sum of your values is " << value1 + value2 << endl;
     break;
     case 2:
     cout<< "The difference of your values is " << value1 - value2 <<endl;
     break;
     case 3:
     cout<< "The product of your values is " << value1*value2 <<endl;
     break;
     case 4:
     cout<< "The quotient of your values is " << value1/value2 << endl;
     break;
     default:
     cout <<"Invalid Operation!" << endl;
 }

 }
