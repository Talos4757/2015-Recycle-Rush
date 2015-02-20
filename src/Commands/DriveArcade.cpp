#include "DriveArcade.h"

DriveArcade::DriveArcade()
{
	Requires(chassis);
}

void DriveArcade::Initialize()
{
}

void DriveArcade::Execute()
{
	chassis->GetRobotDrive()->ArcadeDrive(oi->GetDriverStick());
}

bool DriveArcade::IsFinished()
{
	return false;
}

void DriveArcade::End()
{
	Cancel();
}

void DriveArcade::Interrupted()
{
	End();
}
