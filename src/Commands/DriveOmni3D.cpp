#include "DriveOmni3D.h"

#define X_CHANNEL 0
#define Y_CHANNEL 1
#define Z_CHANNEL 2
#define MIDDLE_LIMIT 0.5

DriveOmni3D::DriveOmni3D()
{
	Requires(chassis);
}

void DriveOmni3D::Initialize()
{
}

float DriveOmni3D::LimitMiddle(float x)
{
	if(x > MIDDLE_LIMIT)
	{
		return MIDDLE_LIMIT;
	}

	if(x < -MIDDLE_LIMIT)
	{
		return -MIDDLE_LIMIT;
	}

	return x;
}

void DriveOmni3D::Execute()
{
	float y = oi->GetRightStick()->GetY();
	float x = LimitMiddle(oi->GetRightStick()->GetX());
	float z = oi->GetRightStick()->GetTwist();

	if(z > -0.1 && z < 0.1)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,false);
		chassis->GetMiddleMotor()->SetSpeed(x);
	}
	else
	{
		//chassis->GetRobotDrive()->ArcadeDrive(oi->GetRightStick(),Y_CHANNEL,oi->GetRightStick(),Z_CHANNEL);
		chassis->GetRobotDrive()->TankDrive(z,-z,false);
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
