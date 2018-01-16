#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	id = "dude";
	shipsTotal = 0;
}

Player::Player(std::string name)
{
	id = "name";
	shipsTotal = 0;
}

Player& Player::operator=(const Player &player)
{
	if (this == &player)
		return *this;

	this->id = player.id;
	return *this;
}

void Player::changeID(std::string newID)
{
	this->id = newID;
}

std::string Player::returnID()
{
	return id;
}

void Player::modShips(int number)
{
	shipsTotal += number;
	if (shipsTotal < 0)
		shipsTotal = 0;
}

int Player::returnShips()
{
	return shipsTotal;
}
