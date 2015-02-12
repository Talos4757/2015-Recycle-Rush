#include "LiftSetter.h"

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
	if(
			((this->speed < 0) && lift->IsTopmost()) //lowering the lift while topmost is OK
				||
			((this->speed > 0) && lift->IsDownmost()) //opposite situation here
		)
	{
		lift->GetLiftMotor()->SetSpeed(this->speed);
	}
	else
	{
		lift->GetLiftMotor()->SetSpeed(0.0f);
	}
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

