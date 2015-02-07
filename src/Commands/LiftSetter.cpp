#include "LiftSetter.h"

LiftSetter::LiftSetter(float s)
{
	Requires(lift);
	this->speed = s;
}

void LiftSetter::Initialize()
{
}

void LiftSetter::Execute()
{
	lift->GetLiftMotor()->SetSpeed(this->speed);
}

bool LiftSetter::IsFinished()
{
	return false;
}

void LiftSetter::End()
{
	Cancel();
}

void LiftSetter::Interrupted()
{
	End();
}

