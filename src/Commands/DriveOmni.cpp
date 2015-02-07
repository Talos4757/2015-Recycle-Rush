#include "DriveOmni.h"

DriveOmni::DriveOmni()
{
	Requires(chassis);
}

void DriveOmni::Initialize()
{
}

void DriveOmni::Execute()
{
	chassis->GetRobotDrive->ArcadeDrive(oi->getRightStick())
}

bool DriveOmni::IsFinished()
{
	return false;
}

void DriveOmni::End()
{
	Cancel();
}

void DriveOmni::Interrupted()
{
	End();
}
