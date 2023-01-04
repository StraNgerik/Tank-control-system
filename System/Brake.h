#ifndef __Brake_H__
#define __Brake_H__

class Brake
{
private:
	bool is_applied;
public:
	Brake();
	void Apply();
	void DisApply();
};

#endif
