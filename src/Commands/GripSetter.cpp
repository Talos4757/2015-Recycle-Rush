#include "GripSetter.h"

GripSetter::GripSetter(float s)
{
	this->speed = s;
	Requires(gripper);
}

void GripSetter::Initialize()
{

}


void GripSetter::Execute()
{
	/*if(this->speed != 0)
	{
		//if((!gripper->open->Get()&&this->speed>0)||(!gripper->close->Get()&&this->speed<0))//
		gripper->GetGripperMotor()->SetSpeed(this->speed);
	}
	/*else
	{
		gripper->GetGripperMotor()->SetSpeed(0.1);
	}*/
	//if((!gripper->open->Get()&&this->speed>0)||(!gripper->close->Get()&&this->speed<0))
		gripper->GetGripperMotor()->SetSpeed(oi->GetLeftStick()->GetX());

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

