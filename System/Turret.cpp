#include <iostream>
#include "Turret.h"

Turret::Turret()
{
	turret_azimut = 0;
	smokes_present = true;
}

void Turret::TurnToAzimut(float azimut)
{
	turret_azimut = azimut;
	std::cout << "Turret turned to " << turret_azimut << " azimut" << std::endl;
}

void Turret::ShootSmoke()
{
	if (smokes_present != true)
	{
		std::cout << "No Smokes!" << std::endl;
	}
	else
	{
		smokes_present = false;
		std::cout << "Smokescreen deployed" << std::endl;
	}
}

void Turret::ReloadGunShell()
{
	gun1.ReloadShell();
}

void Turret::ShootGun()
{
	gun1.Shoot();
}

void Turret::TurnGunToAngle(float range)
{
	gun1.TurnToAngle(range);
}