#include "LiftSetter.h"
#include <math.h>
LiftSetter::LiftSetter(float s)
{
	this->speed = -s;
	Requires(lift);
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

