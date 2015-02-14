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
		((-oi->GetLifterStick()->GetX() > 0.1) && !gripper->IsFullyClosed()) //closing while opened mostly is OK
			||
		((-oi->GetLifterStick()->GetX() < -0.1) && !gripper->IsFullyOpened()) //opposite situation here
		)
	{
		gripper->GetGripperMotor()->SetSpeed(-oi->GetLifterStick()->GetX());
	}
	else
	{
		gripper->GetGripperMotor()->SetSpeed(0);
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
