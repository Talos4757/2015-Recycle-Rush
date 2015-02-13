#include "LiftSetter.h"

LiftSetter::LiftSetter()
{

	Requires(lift);
}

void LiftSetter::Initialize()
{

}

void LiftSetter::Execute()
{
	if(lift->IsDownmost())
		lift->GetLiftEncoder()->Reset();

	if(
			(oi->GetLeftStick()->GetY() > 0 && !lift->IsTopmost()) //lowering the lift while topmost is OK
				||
			(oi->GetLeftStick()->GetY() < 0 && !lift->IsDownmost()) //opposite situation here
		)
	{
		lift->GetLiftMotor()->SetSpeed(-oi->GetLeftStick()->GetY());
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

