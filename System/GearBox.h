#ifndef __GearBox_H__
#define __GearBox_H__

class GearBox
{
private:
	float gear_ratio;
	float speed;
public:
	GearBox();
	void SetSpeed(float speed, int givenrpm);
};

#endif
