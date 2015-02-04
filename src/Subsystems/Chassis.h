#ifndef CHASSIS_H
#define CHASSIS_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
	RobotDrive *robotdrive;
	Talon *mf,*mr, *fl, *fr;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Chassis();
	void InitDefaultCommand();
	Talon* GetMiddleFront();
	Talon* GetMiddleRear();
	RobotDrive* GetRobotDrive();
};

#endif
