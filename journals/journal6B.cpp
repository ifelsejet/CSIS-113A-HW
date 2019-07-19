#include <iostream>
#include <vector>

using namespace std;

void printArray(int arr[], int size, int check);
void fillArray(int arr[], int size);
int countOcc(int arr[], int size, int check);

int main(){
 int num = 0;
 int ar[10];
 cout << "Input the number you want to check the instances of" << endl;
 cin >> num;
 fillArray(ar, 10);
 printArray(ar, 10, num);
 countOcc(ar, 10, num);

 return 0;
}
void fillArray(int arr[], int size){
    for(int i = 0; i < size; i++){

        arr[i] = rand() % 10 +1;
    }

}
void printArray(int arr[], int size, int check){

 for(int i = 0; i < size; i++){
     cout << arr[i] << endl;

 }
 cout << "The number you entered occured " << countOcc(arr,size,check) << " times" << endl;
}

int countOcc(int arr[], int size, int check){
    int occurances = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == check){
            occurances++;

        }
    }
    return occurances;
}
