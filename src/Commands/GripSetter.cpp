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
	if(
		((oi->GetLeftStick()->GetX() > 0.1f) && !gripper->IsFullyClosed()) //closing while opened mostly is OK
			||
		((oi->GetLeftStick()->GetX() < -0.1f) && !gripper->IsFullyOpened()) //opposite situation here
		)
	{
		gripper->GetGripperMotor()->SetSpeed(oi->GetLeftStick()->GetX());
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

