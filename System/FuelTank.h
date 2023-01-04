#ifndef __FuelTank_H__
#define __FuelTank_H__

class FuelTank
{
private:
	float fuel_amount;
public:
	FuelTank();
	FuelTank(float amount);
	void SetFuelAmount(float amount);
	float GetFuelAmount();
};

#endif
