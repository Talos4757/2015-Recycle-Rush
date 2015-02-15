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
	{
		lift->GetLiftEncoder()->Reset();
	}
	SmartDashboard::PutBoolean("lift upmost",lift->IsTopmost());
	SmartDashboard::PutBoolean("lift downmost",lift->IsDownmost());
	SmartDashboard::PutNumber("lift speed:",oi->GetLifterStick()->GetY());
	if(
			(oi->GetLifterStick()->GetY() < -0.15 && !lift->IsTopmost()) //lowering the lift while topmost is OK
			||
			(oi->GetLifterStick()->GetY() > 0.15 && !lift->IsDownmost()) //opposite situation here
	)
	{
		lift->GetLiftMotor()->SetSpeed(oi->GetLifterStick()->GetY());
	}
	else
	{
		lift->GetLiftMotor()->SetSpeed(0);
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

