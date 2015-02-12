#include "Gripper.h"
#include "../RobotMap.h"
#include "../Commands/GripSetter.h"

Gripper::Gripper() : Subsystem("Chassis")
{
	this->GripperMotor = new Talon(GRIP_ENGINE);
}

void Gripper::InitDefaultCommand()
{
	SetDefaultCommand(new GripSetter(0.0f));
}

Talon* Gripper::GetGripperMotor()
{
	return this->GripperMotor;
}
