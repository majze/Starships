#include <iostream>
#include <string>
#include <vector>
#include "gui.h"
#include "ships.h"
#include "player.h"
using namespace std;

void initialize(vector <Player> & Players) {
	Players.push_back(Player());
	Players.at(0).changeCurrency(1000);
}

void stats(vector <Player> Players) {
	cout << endl << "currency: " << Players.at(0).getCurrency() << "\tFighters: " << Players.at(0).Fighters.size() << endl;
}

void menu(vector <Player> & Players) {
	cout << "\nEnter 1 for buy fighter, 2 for sell fighter: ";
	int x;
	cin >> x;
	switch (x) {
	case 1:
		Players.at(0).buyFighter(5);
		return;
	case 2:
		Players.at(0).killFighter(Players.at(0).Fighters.size() - 1);
		return;
	default:
		cout << "\nInvalid choice, choose again.";
		menu(Players);
	}
}

int main() {

	vector <Player> Players;
	initialize(Players);
	stats(Players);

	while (true) {
		menu(Players);
		stats(Players);
	}

	cin.get();
	return 0;
}