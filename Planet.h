#pragma once
#include <string>
#include "Player.h"

class Planet {
protected:
	int planetType;
	double size;
	double oreTotal;
	double gasTotal;
	double rareMetalTotal;
	Player owner;

public:
	Planet();

	virtual void setType(int n);
	virtual void setSize(int planetType);
	void setResources(int planetType);
	void setOwner(Player newOwner);
	
	double readOre();
	double readGas();
	double readRare();
	std::string readType();
	int numType();

	void changeOre(double amount);
	void changeGas(double amount);
	void changeRare(double amount);

	
};