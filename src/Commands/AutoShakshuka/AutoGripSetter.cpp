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
}

void AutoGripSetter::Interrupted()
{
	End();
}

