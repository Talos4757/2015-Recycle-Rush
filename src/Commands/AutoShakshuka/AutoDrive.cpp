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
		chassis->GetRobotDrive()->TankDrive(1.0f,-1.0f,false);
}

bool AutoDrive::IsFinished()
{
	return IsTimedOut();
}

void AutoDrive::End()
{
	Cancel();
}

void AutoDrive::Interrupted()
{
	End();
}
