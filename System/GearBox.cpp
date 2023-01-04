#include "GearBox.h"
#include <iostream>

GearBox::GearBox()
{
	gear_ratio = 0;
	speed = 0;
}

void GearBox::SetSpeed(float speed1,int givenrpm)
{
	const float gearrad = 0.315;
	const float pi = 3.14;
	speed1 = speed1 * 1000 / 60;
	if (speed1 == 0)gear_ratio = 0;
	else gear_ratio = (speed1 / 2 * pi * gearrad) / givenrpm;
	std::cout << "Gear set to " << gear_ratio << std::endl;
	speed = speed1;
	std::cout << "Speed set to " << speed/60  << " meters per second" << std::endl;
}


