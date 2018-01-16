#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "additionaltools.h"
#include "Planet.h"
#include <random>
using namespace std;

typedef std::map<int, std::string> planetTypes;
const planetTypes::value_type x[] = { std::make_pair(1, "Void Space"), std::make_pair(2, "Terrestrial Dwarf"),
									  std::make_pair(3, "Asteroid Field"), std::make_pair(4, "Terrestrial Giant"),
									  std::make_pair(5, "Ice Planet"), std::make_pair(6, "Gas Giant") };

int rollDie()
{
	// Random seed
	random_device rd;

	// Initialize Mersenne Twister pseudo-random number generator
	mt19937 gen(rd());

	// Generate pseudo-random numbers
	// uniformly distributed in range
	uniform_int_distribution<> dis(1, 26);

	double rando = dis(gen);
	return static_cast<int> (rando / 3); //returns value between 0 and 8 (1-6 more common)
}

double Variation(double baseAmount, double modifier)
{
	double multiplier = 1 + (rollDie() / 100);
	return (multiplier*baseAmount);
}