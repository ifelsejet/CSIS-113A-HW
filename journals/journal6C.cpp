#include <iostream>
#include <string>

using namespace std;

int countNums(int ar[][5], int size, int search);
void fillArray(int a[][5], int size);
void printArray(int a[][5], int size);



int main()
{
 int ar[5][5];
 int num;

 fillArray(ar,5);
 printArray(ar,5);

 cout << "What number do you want to search for?" << endl;
 cin >> num;
 int count = countNums(ar, 5, num);
 cout << "Your number appears "<< count << " times in the array" << endl;

 return 0;

}
void fillArray(int a[][5], int size){
 for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
     a[row][col] = rand() % 10 + 1;
    }
 }
}

void printArray (int a[][5], int size){
for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
        cout << a[row][col] << "\t";
        }
    cout << endl;
 }
}

int countNums(int ar[][5], int size, int search){
    int count = 0;
 for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
        if(ar[row][col] == search){
         count++;
         cout << "Found at Row: " << row << " Column: " << col <<  endl;

        }
    }
 }
 return count;

}
