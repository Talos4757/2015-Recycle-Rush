#include "Gripper.h"
#include "../RobotMap.h"
#include "../Commands/GripSetter.h"

Gripper::Gripper() : Subsystem("Gripper")
{
	this->GripperMotor = new Talon(GRIP_ENGINE);
	//this->open=new DigitalInput(MICROSWITCH1);
	//this->close=new DigitalInput(MICROSWITCH2);
}

void Gripper::InitDefaultCommand()
{
	SetDefaultCommand(new GripSetter(0));
}

Talon *Gripper::GetGripperMotor()
{
	return this->GripperMotor;
}
