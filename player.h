#pragma once
#include <string>

class Player {
protected:
	std::string id; //must be unique
	int shipsTotal;

public:
	Player();
	Player(std::string name);
	Player& operator=(const Player &player);
	
	void changeID(std::string newID);
	std::string returnID();

	void modShips(int number);
	int returnShips();
};