// Galactic Empire.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "additionaltools.h"
#include "Galaxy.h"
#include "System.h"
#include "Planet.h"
#include "Player.h"

int main()
{
	std::vector<Galaxy> GameWorld;
	GameWorld.push_back(Galaxy());
	std::cout << "System Generated. Populating...\n";
	for (int i = 0; i < 10; i++) {
		std::cout << i+1 << ". " << GameWorld[0].systems[0].planets[i].readType() << std::endl;
	}
	system("PAUSE");
    return 0;
}

