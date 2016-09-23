#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ship {
protected:
	string shipType;
	int health;
	int attack;
	int shield;
	int cost;
public:
	Ship (string newShip);

	void setHealth(int h);
	void setAttack(int a);
	void setShield(int s);
	void setCost(int c);

	int getHealth();
	int getAttack();
	int getShield();
	int getCost();
	
	bool checkLife(); //false for dead, true for alive
};