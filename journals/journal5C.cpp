#include <iostream>

using namespace std;
int sumInt(int a, int b);
int sumInt(int a, int b, int c);
int sumInt(int a, int b, int c, int d);

int main(){
 cout << "Enter four numbers and I will sum them" << endl;
 int num1, num2, num3, num4;
 cin >> num1 >> num2 >> num3 >> num4;

 int mySum = sumInt(num1, num2, num3, num4);
 cout << "The sum of your numbers is " << mySum << endl;

 return 0;
}
int sumInt(int a, int b){
    return a+b;
}
int sumInt(int a, int b, int c){
    return sumInt(sumInt(a,b),c);
}
int sumInt(int a, int b, int c, int d){
    return sumInt(sumInt(a,b),c,d);
}
