#ifndef CHASSIS_H
#define CHASSIS_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
	RobotDrive *robotdrive;
	Talon *mid, *left, *right;
	Ultrasonic *Dor,*Dor2;
public:
	Chassis();
	void InitDefaultCommand();

	RobotDrive* GetRobotDrive();
	Talon* GetMiddleMotor();
	Ultrasonic *GetDor();
	Ultrasonic *GetDor2();
};

#endif
