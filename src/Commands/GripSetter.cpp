#include "GripSetter.h"

GripSetter::GripSetter(float s)
{
	this->speed = s;
}

void GripSetter::Initialize()
{

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

