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
	SmartDashboard::PutNumber("First Length:",chassis->GetDor()->GetRangeMM()*10);
	SmartDashboard::PutNumber("Second Length:",chassis->GetDor2()->GetRangeMM()*10);
	chassis->GetRobotDrive()->ArcadeDrive(oi->GetRightStick());
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
