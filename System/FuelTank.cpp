#include <iostream>
#include "FuelTank.h"

FuelTank::FuelTank()
{
    fuel_amount = 500;
}

FuelTank::FuelTank(float amount)
{
    fuel_amount = amount;
}

void FuelTank::SetFuelAmount(float amount)
{
    fuel_amount = amount;
    std::cout << "Fuel amount at this moment = " << fuel_amount << std::endl;
}

float FuelTank::GetFuelAmount()
{
    return fuel_amount;
}
