/*
Jatnael Montes

ID: 0508989

October 14, 2018 

Assignment 12 - Functions and the Math Library 

This is lab (assignment) 12 which will use a funtion to find the missing side of a triangle (Pyth. Theorem function)  
*/


#include <iostream> 
#include <math.h> 
using namespace std;

double pythag(double s1, double s2, char side);

int main ()
{
    double side1, side2;
    cout << "Pythagorean theorem, Enter sides A and B and I will solve for C" << endl;
    cin >> side1 >> side2;
    cout << "Side C is equal to " << pythag(side1, side2, 'c') << endl;
    cout << "Now enter sides B and C and I will solve for A" << endl;
    cin >> side1 >> side2;
    cout << "Side A is equal to " << pythag(side1, side2, 'a') << endl;
    cout << "Finally, enter sides A and C and I will solve for B" << endl;
    cin >> side1 >> side2;
    cout << "Side B is equal to " << pythag(side1, side2, 'b') << endl;
       
    return 0;
}

double pythag(double s1, double s2, char side)
{   
    switch(side)
    {
        case 'a':
            double a;
            a = sqrt( pow(s2,2) - pow(s1,2) );
            return a;
            break;
        case 'b':
            double b;
            b = sqrt( pow(s2,2) - pow(s1,2) );
            return b;
            break;
        case 'c':
            double c;
            c = sqrt(pow(s2,2) + pow(s1,2));
            return c;
            break;
        default:
            break;   
    }
}
