#include "AutoGripSetter.h"

AutoGripSetter::AutoGripSetter(float s, float timeout)
{
	Requires(gripper);
	this->speed = s;
	this->step = timeout;
}

void AutoGripSetter::Initialize()
{
	SetTimeout(this->step);
}


void AutoGripSetter::Execute()
{
	SmartDashboard::PutNumber("gripper auto speed",this->speed);
	gripper->GetGripperMotor()->SetSpeed(this->speed);
}

bool AutoGripSetter::IsFinished()
{
	if(speed>0 && gripper->IsFullyOpened())
		return true;
	else if(speed < 0 && gripper->IsFullyClosed())
		return true;
	return IsTimedOut();
}

void AutoGripSetter::End()
{
	Cancel();
}

void AutoGripSetter::Interrupted()
{
	End();
}

