#include <iostream>
#include "Engine.h"

Engine::Engine()
{
	rpm = 0;
	fuel_consumption = 0;
}

int Engine::SetRpm(int needrpm)
{
	rpm = needrpm;
	std::cout << "RPM set to " << rpm << std::endl;
	return rpm;
}

DieselEngine::DieselEngine()
{
	rpm = 0;
	fuel_consumption = 0;
}

void DieselEngine::SetConsump(float S)
{
	fuel_consumption = S * fuel_consumption_koef;
	std::cout << "Will be consumed " << fuel_consumption << " liters of fuel" << std::endl;
}

float DieselEngine::GetConsump()
{
	return fuel_consumption;
}

TurbineEngine::TurbineEngine()
{
	rpm = 0;
	fuel_consumption = 0;
}

void TurbineEngine::SetConsump(float S)
{
	fuel_consumption = S * fuel_consumption_koef;
	std::cout << "Will be consumed " << fuel_consumption << " liters of fuel" << std::endl;
}

float TurbineEngine::GetConsump()
{
	return fuel_consumption;
}

