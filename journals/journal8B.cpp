#include <iostream>
#include "Player.h"

using namespace std;

int main() {
	Player p;

	p.setPlayer(.750, "Glenn")
	cout << "The averages is " << p.getAverage() << endl;
	cout << "The name is " << p.getName() << endl;
	return 0;
}
