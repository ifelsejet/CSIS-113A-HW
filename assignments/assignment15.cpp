/*
Jatnael Montes

ID: 0508989

November 3, 2018

Assignment 15 - Arrays As Arguments

This is lab (assignment) 15 that will use 3 functions to fill, print, and count the # of even numbers within a given array
*/


#include <iostream>
#include <ctime>

using namespace std;

void printArray(int arr[], int size);
void fillArray(int arr[], int size);
int countEvens(int arr[], int size);//since we want the number of evens in the array, we must return some value
int main(){
 srand(time(0)); //get random numbers
 const int SIZE = 25; //we will always use 25 ints
 int array[SIZE]; //create array
 fillArray(array, SIZE);
 printArray(array, SIZE);
 countEvens(array, SIZE);

 return 0;
}
void fillArray(int arr[], int size){
    for(int i = 0; i < size; i++){

        arr[i] = rand() % 101;
    }

}
void printArray(int arr[], int size){

 for(int i = 0; i < size; i++){
     cout << arr[i] << endl;

 }
 cout << "There are " << countEvens(arr, size) << " even numbers in this array" << endl;
}

int countEvens(int arr[], int size){
    int numofEvens = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0) {
            numofEvens++;
        }

    }

    return numofEvens;
}
