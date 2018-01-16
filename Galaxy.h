#pragma once
#include "System.h"
#include "Player.h"
#include <vector>

class Galaxy {
public:
	std::vector<System> systems;
	std::vector<Player> players;
	//std::vector<Faction> factions;
public:
	Galaxy();
	void generateSystems(int amount);

};