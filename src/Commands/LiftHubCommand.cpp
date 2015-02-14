#include "LiftHubCommand.h"

LiftHubCommand::LiftHubCommand()
{
	Requires(lift);
}
void LiftHubCommand::Initialize()
{
}


void LiftHubCommand::Execute()
{
	lift->GetLiftMotor()->SetSpeed(-1.0);
}

bool LiftHubCommand::IsFinished()
{
	return lift->IsDownmost();
}

void LiftHubCommand::End()
{
	lift->GetLiftMotor()->SetSpeed(0.0f);
	Cancel();
}

void LiftHubCommand::Interrupted()
{
	End();
}
