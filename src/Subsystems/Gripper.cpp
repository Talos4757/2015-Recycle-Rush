#include "Gripper.h"
#include "../RobotMap.h"
#include "../Commands/GripSetter.h"

Gripper::Gripper() : Subsystem("Chassis")
{
	this->GripperMotor = new Talon(GRIP_ENGINE);

	this->open = new DigitalInput(GRIP_OPEN_LIMITER);
	this->close = new DigitalInput(GRIP_CLOSE_LIMITER);
}

void Gripper::InitDefaultCommand()
{
	SetDefaultCommand(new GripSetter(0.0f));
}

Talon* Gripper::GetGripperMotor()
{
	return this->GripperMotor;
}

bool Gripper::IsFullyOpened()
{
	return this->open->Get();
}

bool Gripper::IsFullyClosed()
{
	return this->close->Get();
}
