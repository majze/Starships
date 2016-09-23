#pragma once
#include <iostream>
#include <vector>
#include "ships.h"

class Player {
public:
	vector <Ship> Fighters;
	vector <Ship> Bombers;
	vector <Ship> Cruisers;
	vector <Ship> Destroyers;
	int currency;

public:
	void changeCurrency(int c);
	int getCurrency();

	void buyFighter(int n);
	void buyBomber(int n);
	void buyCruiser(int n);
	void buyDestoyer(int n);

	void killFighter(int index);
	void killBomber(int index);
	void killCruiser(int index);
	void killDestroyer(int index);
};