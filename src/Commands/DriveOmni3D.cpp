#include "DriveOmni3D.h"

#define X_CHANNEL 0
#define Y_CHANNEL 1
#define Z_CHANNEL 2

DriveOmni3D::DriveOmni3D()
{
	Requires(chassis);
}

void DriveOmni3D::Initialize()
{
}

void DriveOmni3D::Execute()
{
	float y = oi->GetRightStick()->GetY();
	float x = oi->GetRightStick()->GetX();
	float z = oi->GetRightStick()->GetTwist();

	if(z < 0.1)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,false);
		chassis->GetMiddleMotor()->SetSpeed(x);
	}
	else
	{
		chassis->GetRobotDrive()->ArcadeDrive(oi->GetRightStick(),Y_CHANNEL,oi->GetRightStick(),Z_CHANNEL);
	}
}

bool DriveOmni3D::IsFinished()
{
	return false;
}

void DriveOmni3D::End()
{
	Cancel();
}

void DriveOmni3D::Interrupted()
{
	End();
}
