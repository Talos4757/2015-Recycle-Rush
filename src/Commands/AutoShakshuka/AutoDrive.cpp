#include "AutoDrive.h"

AutoDrive::AutoDrive(float timee)
{
	Requires(chassis);
	this->timeout = timee;
}

void AutoDrive::Initialize()
{
	SetTimeout(this->timeout);
}

void AutoDrive::Execute()
{
	//if(this->step == 0)
		chassis->GetRobotDrive()->TankDrive(1.0f,1.0f,true);
}

bool AutoDrive::IsFinished()
{
	return IsTimedOut();
}

void AutoDrive::End()
{

}

void AutoDrive::Interrupted()
{
	End();
}
