#include <iostream>

using namespace std;
void getInts(int &a, int &b);
void swap(int &a, int &b);
void sort(int &a, int &b, bool descend = true);

int main(){
    int x, y;
    getInts(x,y);
    cout << x << " " << y << endl;
    swap(x,y);
    cout << x << " " << y << endl;
    sort(x,y, false);
    cout << x << " " << y << endl;

 return 0;
}

void getInts (int &a, int &b){
 cout << "Enter two values " << endl;
 cin >> a >> b;
}

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort(int &a, int &b, bool descend){
 if(descend)
 {
  if (a > b)
    swap(a, b);
 }
 else
 {
     if(a < b)
        swap(a, b);

}

}
