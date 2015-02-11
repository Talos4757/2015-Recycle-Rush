#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/SlowOmni.h"

Chassis::Chassis() : Subsystem("Chassis")
{
	this->right = new Talon(CH_RIGHT_MOTOR);
	this->left = new Talon(CH_LEFT_MOTOR);
	this->mid = new Talon(CH_MIDDLE_MOTOR);
	this->robotdrive = new RobotDrive(right,left);
	this->Dor=new Ultrasonic(SONAR,SONAR2);
	this->Dor2=new Ultrasonic(SONAR3,SONAR4);
}

void Chassis::InitDefaultCommand()
{
	SetDefaultCommand(new SlowOmni());
}

RobotDrive *Chassis::GetRobotDrive()
{
	return robotdrive;
}

Talon* Chassis::GetMiddleMotor()
{
	return this->mid;
}
Ultrasonic* Chassis::GetDor()
{
	return this->Dor;
}
Ultrasonic* Chassis::GetDor2()
{
	return this->Dor2;
}
