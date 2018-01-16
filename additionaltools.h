#pragma once
#include <iostream>
#include <map>
#include <string>

typedef std::map<int, std::string> planetTypes;

void populatePlanetMap();


int rollDie(); //weighted die where 1 is more common than 6
double Variation(double baseAmount, double modifer);