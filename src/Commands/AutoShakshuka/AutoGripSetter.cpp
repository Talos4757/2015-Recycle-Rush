#include <Commands/AutoShakshuka/AutoGripSetter.h>

AutoGripSetter::AutoGripSetter(float s, float timeout)
{
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
	return false;
}

void AutoGripSetter::End()
{
	Cancel();
}

void AutoGripSetter::Interrupted()
{
	End();
}

