#ifndef __Engine_H__
#define __Engine_H__

class Engine
{
private:
	int rpm;
	float fuel_consumption;
public:
	Engine();
	int SetRpm(int needrpm);
};

class DieselEngine : public Engine
{
private:
	int rpm;
	float fuel_consumption;
	const float fuel_consumption_koef = 1.8; //l/km
public:
	DieselEngine();
	void SetConsump(float S);
	float GetConsump();
};

class TurbineEngine : public Engine
{
private:
	float fuel_consumption;
	int rpm;
	const float fuel_consumption_koef=4.55; //l/km
public:
	TurbineEngine();
	void SetConsump(float S);
	float GetConsump();
};
#endif
