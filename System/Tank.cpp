#include <iostream>
#include "Tank.h"
#include <math.h>

Tank::Tank()
{
	number = 0;
	pos_x = 0;
	pos_y = 0;
}

Tank::Tank(int num, float x, float y)
{
	number = num;
	pos_x = x;
	pos_y = y;
}

void Tank::GoToPoint(float x, float y, float speed)
{
	float length = sqrt((x - pos_x) * (x - pos_x) + (y - pos_y) * (y - pos_y))/1000;//km
	engine1.SetConsump(length);
	if (engine1.GetConsump() > fueltank1.GetFuelAmount())
	{
		std::cout << "Not enough fuel to get there!" << std::endl;
	}
	else
	{
		gearbox1.SetSpeed(speed, engine1.SetRpm(3000));
		fueltank1.SetFuelAmount(fueltank1.GetFuelAmount() - engine1.GetConsump());
		brake1.Apply();
		gearbox1.SetSpeed(0, engine1.SetRpm(0));
		brake1.DisApply();
		pos_x = x;
		pos_y = y;
		std::cout << "Tank now at x = " << x << " y= " << y << std::endl;
	}
}

void Tank::ShootAt(float range, float azimut)
{
	turret1.TurnToAzimut(azimut);
	turret1.TurnGunToAngle(range);
	turret1.ShootGun();
}

void Tank::ShootSmoke(float azimut)
{
	turret1.TurnToAzimut(azimut);
	turret1.ShootSmoke();
}

void Tank::Reload()
{
	turret1.ReloadGunShell();
}
