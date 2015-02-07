#ifndef CHASSIS_H
#define CHASSIS_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
	RobotDrive *robotdrive;

	Talon *mid, *left, *right;

public:
	Chassis();
	void InitDefaultCommand();

	RobotDrive* GetRobotDrive();
};

#endif
