#include "GripSetter.h"
#include "../Helper.h"

#define DEADZONE 0.2f

GripSetter::GripSetter()
{
	Requires(gripper);
}

void GripSetter::Initialize()
{
}

void GripSetter::Execute()
{
	SmartDashboard::PutBoolean("grip open",gripper->IsFullyOpened());
	SmartDashboard::PutBoolean("grip closed",gripper->IsFullyClosed());

	if(
		((-oi->GetLifterStick()->GetX() > DEADZONE) && !gripper->IsFullyClosed()) //closing while opened mostly is OK
			||
		((-oi->GetLifterStick()->GetX() < -DEADZONE) && !gripper->IsFullyOpened()) //opposite situation here
		)
	{
		float x = -oi->GetLifterStick()->GetX();
		if(x<0) //remap the values so there is no deadzone, if joystick is at DEADZONE value will be 0
			x = Helper::ReMap(ValueRange(-DEADZONE,-1.0f), ValueRange(0,-1.0f),x);
		else
			x = Helper::ReMap(ValueRange(DEADZONE,1.0f), ValueRange(0,1.0f),x);
		gripper->GetGripperMotor()->SetSpeed(x);
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
