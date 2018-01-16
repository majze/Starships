#include "stdafx.h"
#include "Galaxy.h"
#include "Player.h"
#include "System.h"
#include <string>

Galaxy::Galaxy()
{
	players.push_back(Player("Player1"));
	for (int i = 0; i < 100; i++) {
		systems.push_back(System());
	}
}

void Galaxy::generateSystems(int amount)
{
	for (int i = 0; i < amount; i++) {
		systems.push_back(System());
	}
}