#include "GripSetter.h"

GripSetter::GripSetter(float s)
{
	this->speed  = -s;
	Requires(gripper);
}

void GripSetter::Initialize()
{
}

void GripSetter::Execute()
{
	if(
		((this->speed > 0) && gripper->IsFullyOpened()) //closing while opened mostly is OK
			||
		((this->speed < 0) && gripper->IsFullyClosed()) //opposite situation here
		)
	{
		gripper->GetGripperMotor()->SetSpeed(this->speed);
	}
	else
	{
		gripper->GetGripperMotor()->SetSpeed(0.0f);
	}
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

