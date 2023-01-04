#ifndef __Tank_H__
#define __Tank_H__
#include "Turret.h"
#include "Engine.h"
#include "GearBox.h"
#include "FuelTank.h"
#include "Brake.h"

class Tank
{
private:
	int number;
	float pos_x;
	float pos_y;
	Turret turret1;
	DieselEngine engine1;
	GearBox gearbox1;
	FuelTank fueltank1;
	Brake brake1;
public:
	Tank();
	Tank(int num,float x,float y);
	void GoToPoint(float x, float y, float speed);
	void ShootAt(float range, float azimut);
	void ShootSmoke(float azimut);
	void Reload();
};

#endif
