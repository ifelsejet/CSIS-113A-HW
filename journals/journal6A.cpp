#include <iostream>
#include <vector>

using namespace std;

void printArray(int arr[], int size);
void fillArray(int arr[], int size);
int main(){

 int ar[10];
 fillArray(ar, 10);
 printArray(ar, 10);

 return 0;
}
void fillArray(int arr[], int size){
    for(int i = 0; i < size; i++){

        arr[i] = rand() % 10 +1;
    }

}
void printArray(int arr[], int size){

 for(int i = 0; i < size; i++){
     cout << arr[i] << endl;

 }
}
