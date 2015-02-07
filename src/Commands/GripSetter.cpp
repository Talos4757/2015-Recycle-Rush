#include "GripSetter.h"

GripSetter::GripSetter()
{
	this->speed = 0.8;
}

void GripSetter::SetSpeed(float s)
{
	this->speed = s;
}

void GripSetter::Execute()
{
	gripper->GetGripperMotor()->SetSpeed(this->speed);
}

bool GripSetter::IsFinished()
{
	return false;
}

void GripSetter::End()
{
	Cancel();
}

void GripSetter::Interrupted()
{
	End();
}

