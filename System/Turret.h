#ifndef __Turret_H__
#define __Turret_H__
#include "Gun.h"

class Turret
{
private:
	float turret_azimut;
	bool smokes_present;
	Gun gun1;
public:
	Turret();
	void TurnToAzimut(float azimut);
	void ShootSmoke();
	void ReloadGunShell();
	void ShootGun();
	void TurnGunToAngle(float range);
};

#endif
