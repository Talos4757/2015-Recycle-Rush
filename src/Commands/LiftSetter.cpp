#include "LiftSetter.h"
#include <math.h>
LiftSetter::LiftSetter()
{
	Requires(lift);
}

void LiftSetter::Initialize()
{
}

void LiftSetter::Execute()
{
	SmartDashboard::PutNumber("height: ", lift->GetEnc()->Get()*2*5*M_PI);
	if((lift->UpLimit->Get()&&oi->GetLeftStick()->GetY()>0)||(lift->Bottom->Get()&&oi->GetLeftStick()->GetY()<0))
		lift->GetLiftMotor()->SetSpeed(oi->GetLeftStick()->GetY());
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

