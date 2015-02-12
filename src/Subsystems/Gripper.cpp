#include "Gripper.h"
#include "../RobotMap.h"
#include "../Commands/GripSetter.h"

Gripper::Gripper() : Subsystem("Chassis")
{
	this->GripperMotor = new Talon(GRIP_ENGINE);
}

void Gripper::InitDefaultCommand()
{
	SetDefaultCommand(new GripSetter());
}

Talon* Gripper::GetGripperMotor()
{
	return this->GripperMotor;
}
/*
Talon* Chassis::GetMiddleMotor()
{
	return this->mid;
}*/
/*Ultrasonic* Chassis::GetDor()
{
	return this->Dor;
}
Ultrasonic* Chassis::GetDor2()
{
	return this->Dor2;
}
*/


