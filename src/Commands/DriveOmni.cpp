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
	float y = oi->GetRightStick()->GetY();
	float x = oi->GetLeftStick()->GetX();
	chassis->GetRobotDrive()->TankDrive(y,y,false);
	chassis->GetMiddleMotor()->SetSpeed(x);
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
