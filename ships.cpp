#include <iostream>
#include "ships.h"
using namespace std;

Ship::Ship(string newShip)
{
	if (newShip == "Fighter") {
		setHealth(100);
		setAttack(25);
		setShield(0);
		setCost(50);
		shipType = newShip;
	} else if (newShip == "Bomber") {
		setHealth(250);
		setAttack(200);
		setShield(0);
		setCost(300);
		shipType = newShip;
	}
	else if (newShip == "Cruiser") {
		setHealth(1200);
		setAttack(250);
		setShield(200);
		setCost(2200);
		shipType = newShip;
	}
	else if (newShip == "Destroyer") {
		setHealth(4000);
		setAttack(600);
		setShield(500);
		setCost(8000);
		shipType = newShip;
	}
	else {
		cout << "\nError: Setting ship type to unidentified ship type\n";
	}
}

void Ship::setHealth(int h)
{
	if (h >= 0) {
		health = h;
	}
	else {
		cout << "\nError: Setting ship health to value under zero\n";
	}
}

void Ship::setAttack(int a)
{
	if (a >= 0) {
		attack = a;
	}
	else {
		cout << "\nError: Setting ship attack to value under zero\n";
	}
}

void Ship::setShield(int s)
{
	if (s >= 0) {
		shield = s;
	}
	else {
		cout << "\nError: Setting ship shield to value under zero\n";
	}
}

void Ship::setCost(int c)
{
	if (c >= 0) {
		cost = c;
	}
	else {
		cout << "\nError: Setting ship cost to value under zero\n";
	}
}

int Ship::getHealth()
{
	return health;
}

int Ship::getAttack()
{
	return attack;
}

int Ship::getShield()
{
	return shield;
}

int Ship::getCost()
{
	return cost;
}

bool Ship::checkLife()
{
	if (getHealth() <= 0)
		return false;
	return true;
}
