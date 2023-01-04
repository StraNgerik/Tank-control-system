#include <iostream>
#include "Gun.h"
#include <math.h>
Gun::Gun()
{
	angle = 0;
	shell_loaded = true;
	shell_amount = 24;
}

void Gun::ReloadShell()
{
	if (!shell_loaded)
	{
		if (shell_amount != 0)
		{
			std::cout << "Loaded shell" << std::endl;
			shell_loaded = true;
			shell_amount = shell_amount - 1;
			std::cout << shell_amount <<" Shells left" << std::endl;
		}
		else
		{
			std::cout << "No shells left!" << std::endl;
		}
	}
	else
	{
		std::cout << "Shell already loaded" << std::endl;
	}
}

void Gun::Shoot()
{
	if(shell_loaded)
	{
		std::cout << "Shooting at angle of " << angle << " degrees" << std::endl;
		shell_loaded = false;
	}
	else
	{
		std::cout << "No shell!" << std::endl;
	}
}

void Gun::TurnToAngle(float range/*m*/)
{
	const float ShellSpeed = 2000; //m/s
	const float g = 9.8;
	if (range > (ShellSpeed * ShellSpeed) / g)
	{
		std::cout << "Target too far! Seting angle to maximum range" << std::endl;
		angle = 45;
	}
	else angle = acos((range * g) / (ShellSpeed * ShellSpeed)) / 2;
	std::cout << "Gun turned to " << angle << " degree, range set = " << range << " meters" << std::endl;
}
