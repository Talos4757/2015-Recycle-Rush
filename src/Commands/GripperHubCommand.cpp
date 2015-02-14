#include "GripperHubCommand.h"

GripperHubCommand::GripperHubCommand()
{
	Requires(gripper);
}
void GripperHubCommand::Initialize()
{
}


void GripperHubCommand::Execute()
{
	gripper->GetGripperMotor()->SetSpeed(-1.0f);
}

bool GripperHubCommand::IsFinished()
{
	return gripper->IsFullyOpened();
}

void GripperHubCommand::End()
{
	gripper->GetGripperMotor()->SetSpeed(0.0f);
	Cancel();
}

void GripperHubCommand::Interrupted()
{
	End();
}

