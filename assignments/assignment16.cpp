/*
Jatnael Montes

ID: 0508989

November 11, 2019

Assignment 16 - 2D Arrays 

This is lab (assignment) 16 which fills a 2D array with random numbers then outputs all numbers in that 
array that are divisible by a number inputted by the user and then outputs it to the screen
*/

#include <iostream>
#include <string>

using namespace std;

int countNums(int ar[][10], int size, int search);
void fill2DArray(int a[][10], int size);
void print2DArray(int a[][10], int size);
int getDivisible(int ar[][10], int divisor, int a[], int size);
void printArray(int a[10], int size);



int main()
{
 int ar[10][10];
 int arr[10];
 int num;
 
 fill2DArray(ar,10);
 print2DArray(ar,10);
 
 cout << "Enter a number to divide by" << endl;
 cin >> num;
 int count = getDivisible(ar,num, arr, 10);
 cout << "There are " << count << " evenly divisible in the array" << endl;
 printArray();
 
 return 0;
 
}
void fill2DArray(int a[][10], int size){
 for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
     a[row][col] = rand() % 1000 + 1;   
    }
 }
}

void print2DArray (int a[][10], int size){
for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
        cout << a[row][col] << "\t";   
        }
    cout << endl;
 }
}

int getDivisible(int ar[][10], int divisor, int a[], int size){
 int count = 0;
    for(int row= 0; int i = 0; row < size; row++){
        for(int col = 0; col < size; col++){
         if(ar[row][col] % divisor == 0){
           a[i] = ar[row][col];
            count++; 
         }
        }
    }
 return count; 
}
void printArray(int a[10], int size){
    for (int row = 0; row < size; row++){
            cout << a[row] << endl;
    }
}

