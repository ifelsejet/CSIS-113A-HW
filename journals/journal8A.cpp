#include <iostream>

using namespace std;

struct Player
{
char Name[50];
double average;
};

void printPlayerAverage(Player p);
void getPlayerAverage(Player *plr);

int main(){
    Player p[3];
    for(int i =0; i < 3; i++){
     getPlayerAverage(&p[i]);
     printPlayerAverage(p[i]);
    }



 return 0;
}

void getPlayerAverage(Player *plr, int size){

    for(int i = 0; i < size; i++){
 cout << "Enter the player's name" << endl;
 cin >> plr-> Name;

 cout << "Enter the players average" << endl;
 cin >> plr-> average;
    }
}

void printPlayerAverage(Player p, int size){
    for(int i = 0; i < size; i++){
        cout << p.Name<< " is hitting " << p.average << endl;
}
}
