#ifndef __Gun_H__
#define __Gun_H__

class Gun
{
private:
	float angle;
	bool shell_loaded;
	int shell_amount;
public:
	Gun();
	void ReloadShell();
	void Shoot();
	void TurnToAngle(float range);
};

#endif
