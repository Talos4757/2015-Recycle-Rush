#include "GripSetter.h"
#include "../Helper.h"

#define DEADZONE 0.4f

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

	float x = -oi->GetLifterStick()->GetX();
	if(gripper->GetSwitches())
	{
		if(
		((x > DEADZONE) && !gripper->IsFullyClosed()) //closing while opened mostly is OK
			||
		((x < -DEADZONE) && !gripper->IsFullyOpened()) //opposite situation here
		)
	{
		SmartDashboard::PutBoolean("moving middle",true);
		//if(x<0) //remap the values so there is no deadzone, if joystick is at DEADZONE value will be 0 //apperantly 0-somenumber is a deadrange
		//	x = Helper::ReMap(ValueRange(-DEADZONE,-1.0f), ValueRange(-0.3f,-1.0f),x);
		//else
		//	x = Helper::ReMap(ValueRange(DEADZONE,1.0f), ValueRange(0.3f,1.0f),x);
		gripper->GetGripperMotor()->SetSpeed(x);
	}
	else
	{
		SmartDashboard::PutBoolean("moving middle",false);
		gripper->GetGripperMotor()->SetSpeed(0);
	}
	 }
	else
	{
		if(
				(x > DEADZONE)  //closing while opened mostly is OK
					||
				(x < -DEADZONE) //opposite situation here
				)
			{
				SmartDashboard::PutBoolean("moving middle",true);
				//if(x<0) //remap the values so there is no deadzone, if joystick is at DEADZONE value will be 0 //apperantly 0-somenumber is a deadrange
				//	x = Helper::ReMap(ValueRange(-DEADZONE,-1.0f), ValueRange(-0.3f,-1.0f),x);
				//else
				//	x = Helper::ReMap(ValueRange(DEADZONE,1.0f), ValueRange(0.3f,1.0f),x);
				gripper->GetGripperMotor()->SetSpeed(x);
			}
			else
			{
				SmartDashboard::PutBoolean("moving middle",false);
				gripper->GetGripperMotor()->SetSpeed(0);
			}
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
