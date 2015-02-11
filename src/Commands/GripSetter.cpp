#include "GripSetter.h"

GripSetter::GripSetter(float s)
{
	Requires(gripper);
	this->speed = s;
}

void GripSetter::Initialize()
{

}


void GripSetter::Execute()
{

	if((!gripper->open->Get()&&this->speed>0)||(!gripper->close->Get()&&this->speed<0))
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

