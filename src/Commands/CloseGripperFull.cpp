#include "CloseGripperFull.h"

CloseGripperFull::CloseGripperFull()
{
	Requires(gripper);
}
void CloseGripperFull::Initialize()
{
}

void CloseGripperFull::Execute()
{
	gripper->GetGripperMotor()->SetSpeed(-1);
}

bool CloseGripperFull::IsFinished()
{
	return gripper->IsFullyOpened();
}

void CloseGripperFull::End()
{
	gripper->GetGripperMotor()->SetSpeed(0);
	Cancel();
}

void CloseGripperFull::Interrupted()
{
	End();
}

