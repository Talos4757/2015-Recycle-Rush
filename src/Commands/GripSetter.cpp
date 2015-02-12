#include "GripSetter.h"

GripSetter::GripSetter()
{
	Requires(gripper);

}

void GripSetter::Initialize()
{

}


void GripSetter::Execute()
{
/*
	if((!gripper->open->Get()&&this->speed>0)||(!gripper->close->Get()&&this->speed<0))
		gripper->GetGripperMotor()->SetSpeed(this->speed);
*/
	gripper->GetGripperMotor()->SetSpeed(-oi->GetLeftStick()->GetX());
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

