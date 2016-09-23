#include <iostream>
#include <vector>
#include "player.h"
#include "ships.h"
using namespace std;

void Player::changeCurrency(int c)
{
	currency += c;
	if (currency < 0)
		cout << "\nError: Setting player currency to value lower than zero\n";
}

int Player::getCurrency()
{
	return currency;
}

void Player::buyFighter(int n)
{
	int cost = (n * 50);
	if (cost > currency) {
		cout << "\nError: Cost of ship(s) higher than player currency\n";
	}
	else {
		cost = 0;
		for (int i = 0; i < n; i++) {
			Fighters.push_back(Ship("Fighter"));
			cost -= 50;
		}
		changeCurrency(cost);
	}
}

void Player::buyBomber(int n)
{
	int cost = (n * 300);
	if (cost > currency) {
		cout << "\nError: Cost of ship(s) higher than player currency\n";
	}
	else {
		cost = 0;
		for (int i = 0; i < n; i++) {
			Bombers.push_back(Ship("Bomber"));
			cost -= 300;
		}
		changeCurrency(cost);
	}
}

void Player::buyCruiser(int n)
{
	int cost = (n * 2200);
	if (cost > currency) {
		cout << "\nError: Cost of ship(s) higher than player currency\n";
	}
	else {
		cost = 0;
		for (int i = 0; i < n; i++) {
			Cruisers.push_back(Ship("Cruiser"));
			cost -= 2200;
		}
		changeCurrency(cost);
	}
}

void Player::buyDestoyer(int n)
{
	int cost = (n * 8000);
	if (cost > currency) {
		cout << "\nError: Cost of ship(s) higher than player currency\n";
	}
	else {
		cost = 0;
		for (int i = 0; i < n; i++) {
			Destroyers.push_back(Ship("Destroyer"));
			cost -= 8000;
		}
		changeCurrency(cost);
	}
}

void Player::killFighter(int index)
{
	if (Fighters.size() <= 0) {
		return;
	} else if (Fighters.size() == 1) {
		Fighters.clear();
		return;
	}
	Fighters.erase(Fighters.begin() + index);
}

void Player::killBomber(int index)
{
	if (Bombers.size() <= 0) {
		return;
	}
	else if (Bombers.size() == 1) {
		Bombers.clear();
		return;
	}
	Bombers.erase(Bombers.begin() + index);
}

void Player::killCruiser(int index)
{
	if (Cruisers.size() <= 0) {
		return;
	}
	else if (Cruisers.size() == 1) {
		Cruisers.clear();
		return;
	}
	Cruisers.erase(Cruisers.begin() + index);
}

void Player::killDestroyer(int index)
{
	if (Destroyers.size() <= 0) {
		return;
	}
	else if (Destroyers.size() == 1) {
		Destroyers.clear();
		return;
	}
	Destroyers.erase(Destroyers.begin() + index);
}
