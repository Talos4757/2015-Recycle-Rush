#include "AutoDrive.h"

AutoDrive::AutoDrive(float s)
{
	Requires(chassis);
	this->step = s;
}

void AutoDrive::Initialize()
{
	SetTimeout(this->step);
}

void AutoDrive::Execute()
{
	//if(this->step == 0)
		chassis->GetRobotDrive()->ArcadeDrive(oi->GetDriverStick());
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
