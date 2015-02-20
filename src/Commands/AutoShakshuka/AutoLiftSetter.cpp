#include <Commands/AutoShakshuka/AutoLiftSetter.h>

AutoLiftSetter::AutoLiftSetter(float s, float st)
{
	Requires(lift);
	this->speed = s;
	this->step = st;
}

void AutoLiftSetter::Initialize()
{
	SetTimeout(this->step);
}

void AutoLiftSetter::Execute()
{
	lift->GetLiftMotor()->SetSpeed(this->speed);
}

bool AutoLiftSetter::IsFinished()
{
	return false;
}

void AutoLiftSetter::End()
{
	Cancel();
}

void AutoLiftSetter::Interrupted()
{
	End();
}

