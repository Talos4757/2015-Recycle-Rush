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
	SmartDashboard::PutBoolean("ClosingGrip",true);
	gripper->GetGripperMotor()->SetSpeed(-1);
}

bool CloseGripperFull::IsFinished()
{
	return gripper->IsFullyOpened();
}

void CloseGripperFull::End()
{
	SmartDashboard::PutBoolean("ClosingGrip",false);
	gripper->GetGripperMotor()->SetSpeed(0);
	Cancel();
}

void CloseGripperFull::Interrupted()
{
	End();
}

