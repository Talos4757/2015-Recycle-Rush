#ifndef CHASSIS_H
#define CHASSIS_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
	RobotDrive *robotdrive;
	Talon *middlewheel, *fl, *fr, *rr, *rl;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Chassis();
	void InitDefaultCommand();
	Talon* GetMiddleWheel();
	RobotDrive* GetRobotDrive();
};

#endif
