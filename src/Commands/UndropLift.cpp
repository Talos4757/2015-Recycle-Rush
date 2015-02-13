#include "UndropLift.h"

UndropLift::UndropLift()
{
	Requires(lift);
}

void UndropLift::Initialize()
{

}

void UndropLift::Execute()
{
	lift->GetLiftMotor()->SetSpeed(-1.0);
}

bool UndropLift::IsFinished()
{
	return lift->IsDownmost();
}

void UndropLift::End()
{
	Cancel();
}

void UndropLift::Interrupted()
{
	End();
}
