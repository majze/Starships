#include "stdafx.h"
#include "Planet.h"
#include "additionaltools.h"

Planet::Planet()
{
	int type = rollDie();

	setType(type);
	setSize(planetType);
	setResources(planetType);
	setOwner(Player("n/a"));
}

void Planet::setType(int n)
{
	switch (n) {
	case 1:
	case 2:
		planetType = 1; //Empty
		break;
	case 3:
	case 4:
		planetType = 2; //SmallRock
		break;
	case 5:
		planetType = 3; //Asteroids
		break;
	case 6:
		planetType = 4; //LargeRock
		break;
	case 7:
		planetType = 5; //IceRock
		break;
	case 8:
		planetType = 6; //GasGiant
		break;
	default:
		planetType = 1;
		break;
	}	
}

void Planet::setSize(int planetType)
{
	switch (planetType) {
	case 1: //Empty
		size = 0;
		break;
	case 2: //SmallRock
		size = Variation(7000, 0.031415926);
		break;
	case 3: //Asteroids
		size = Variation(1000, 0.031415926);
		break;
	case 4: //LargeRock
		size = Variation(15000, 0.031415926);
		break;
	case 5: //IceRock
		size = Variation(12000, 0.031415926);
		break;
	case 6: //GasRock
		size = Variation(50000, 0.094247778);
		break;
	default:
		size = 0;
		break;
	}
}

void Planet::setResources(int planetType)
{
	switch (planetType) {
	case 1: //Empty
		oreTotal = 0;
		gasTotal = 0;
		rareMetalTotal = 0;
		break;
	case 2: //SmallRock
		oreTotal = Variation(200000, 0.01);
		gasTotal = Variation(100000, 0.01);
		rareMetalTotal = Variation(25000, 0.01);
		break;
	case 3: //Asteroids
		oreTotal = Variation(25000, 0.01);
		gasTotal = Variation(10000, 0.01);
		rareMetalTotal = Variation(10000, 0.01);
		break;
	case 4: //LargeRock
		oreTotal = Variation(500000, 0.01);
		gasTotal = Variation(200000, 0.01);
		rareMetalTotal = Variation(100000, 0.01);
		break;
	case 5: //IceRock
		oreTotal = Variation(10000, 0.01);
		gasTotal = Variation(25000, 0.01);
		rareMetalTotal = 0;
		break;
	case 6: //GasRock
		oreTotal = 0;
		gasTotal = Variation(500000, 0.01);
		rareMetalTotal = 0;
		break;
	default:
		oreTotal = 0;
		gasTotal = 0;
		rareMetalTotal = 0;
		break;
	}
}

void Planet::setOwner(Player newOwner)
{
	owner = newOwner;
}

double Planet::readOre()
{
	return oreTotal;
}

double Planet::readGas()
{
	return gasTotal;
}

double Planet::readRare()
{
	return rareMetalTotal;
}

std::string Planet::readType()
{
	switch (planetType) {
	case 1:
		return "Void Space";
		break;
	case 2:
		return "Terrestrial Dwarf";
		break;
	case 3:
		return "Asteroid Field";
		break;
	case 4:
		return "Terrestrial Giant";
		break;
	case 5:
		return "Ice Planet";
		break;
	case 6:
		return "Gas Giant";
		break;
	default:
		return "Unknown space";
		break;
	}
}

int Planet::numType()
{
	return planetType;
}

void Planet::changeOre(double amount)
{
	oreTotal -= amount;
}

void Planet::changeGas(double amount)
{
	gasTotal -= amount;
}

void Planet::changeRare(double amount)
{
	rareMetalTotal -= amount;
}

