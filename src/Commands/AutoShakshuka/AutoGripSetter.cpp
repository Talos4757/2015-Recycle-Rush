#include <Commands/AutoShakshuka/AutoGripSetter.h>

AutoGripSetter::AutoGripSetter(float s, int st)
{
	this->speed = s;
	this->step = st;
}

void AutoGripSetter::Initialize()
{

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

