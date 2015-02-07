#include "Gripper.h"
#include "../RobotMap.h"
#include "../Commands/GripSetter.h"

Gripper::Gripper() : Subsystem("Gripper")
{
	this->GripperMotor = new Talon(GRIP_ENGINE);
}

void Gripper::InitDefaultCommand()
{
	SetDefaultCommand(new GripSetter());
}

Talon *Gripper::GetGripperMotor()
{
	return this->GripperMotor;
}
