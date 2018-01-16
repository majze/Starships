#include "stdafx.h"
#include "System.h"
#include <vector>
#include "additionaltools.h"

System::System()
{
	for (int i = 0; i < 10; i++) {
		planets.push_back(Planet());
		if (i / 2 < 2) {
			this->planets[i].setType(abs(rollDie() - 3)); //No ice or gas giants near the sun
		}
	}
}
