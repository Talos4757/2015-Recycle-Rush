#include "Commands/SlowOmni.h"
#include "Chassis.h"
#include "../RobotMap.h"

Chassis::Chassis() : Subsystem("Chassis")
{
	this->right = new Talon(CH_RIGHT_MOTOR);
	this->left = new Talon(CH_LEFT_MOTOR);
	this->mid = new Talon(CH_MIDDLE_MOTOR);
	this->robotdrive = new RobotDrive(right,left);
}

void Chassis::InitDefaultCommand()
{
	SetDefaultCommand(new SlowOmni());
}

RobotDrive* Chassis::GetRobotDrive()
{
	return robotdrive;
}

Talon* Chassis::GetMiddleMotor()
{
	return this->mid;
}
