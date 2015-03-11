#include "AutoDrive.h"

AutoDrive::AutoDrive()
{
	Requires(chassis);
}

void AutoDrive::Initialize()
{
}

void AutoDrive::Execute()
{
	chassis->GetRobotDrive()->TankDrive(-0.5,-0.5);
}

bool AutoDrive::IsFinished()
{
	return false;
}

void AutoDrive::End()
{

}

void AutoDrive::Interrupted()
{

}
