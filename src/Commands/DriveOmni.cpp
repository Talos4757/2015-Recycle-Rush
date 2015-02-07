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
	chassis->GetRobotDrive()->TankDrive(oi->GetRightStick()->GetY(),oi->GetRightStick()->GetY());
	chassis->GetMiddleMotor()->SetSpeed(oi->GetRightStick()->GetX());
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
