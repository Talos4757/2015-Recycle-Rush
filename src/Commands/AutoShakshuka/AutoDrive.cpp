#include "AutoDrive.h"

AutoDrive::AutoDrive(int s)
{
	Requires(chassis);
	this->step = s;
}

void AutoDrive::Initialize()
{
}

void AutoDrive::Execute()
{
	if(this->step == 0)
		chassis->GetRobotDrive()->ArcadeDrive(oi->GetRightStick());
}

bool AutoDrive::IsFinished()
{
	return false;
}

void AutoDrive::End()
{
	Cancel();
}

void AutoDrive::Interrupted()
{
	End();
}