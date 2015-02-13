#include "DropLift.h"

DropLift::DropLift()
{
	Requires(lift);
}

void DropLift::Initialize()
{

}

void DropLift::Execute()
{
	lift->GetLiftMotor()->SetSpeed(1);
}

bool DropLift::IsFinished()
{
	return lift->IsDownmost();
}

void DropLift::End()
{
	Cancel();
}

void DropLift::Interrupted()
{
	End();
}
