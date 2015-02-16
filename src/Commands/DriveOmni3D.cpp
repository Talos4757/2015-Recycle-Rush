#include "DriveOmni3D.h"
#include "../Helper.h"
#include <math.h>
#define X_CHANNEL 0
#define Y_CHANNEL 1
#define Z_CHANNEL 2
#define MIDDLE_LIMIT 0.5

#define ZDEADZONE 0.25f

DriveOmni3D::DriveOmni3D()
{
	Requires(chassis);
}

void DriveOmni3D::Initialize()
{
}

float DriveOmni3D::LimitMiddle(float x)
{
	return (x*x*x);
}

void DriveOmni3D::Execute()
{
	SmartDashboard::PutBoolean("DrivingSlow",false);
	float y = oi->GetDriverStick()->GetY();
	float x = LimitMiddle(oi->GetDriverStick()->GetX());
	float z = oi->GetDriverStick()->GetTwist();

	if(z > -ZDEADZONE && z < ZDEADZONE)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,false);
		chassis->GetMiddleMotor()->SetSpeed(x);
	}
	else
	{
		if(z<0)
			z = Helper::ReMap(ValueRange(-ZDEADZONE,-1),ValueRange(0,-1),z);
		else
			z = Helper::ReMap(ValueRange(ZDEADZONE,1),ValueRange(0,1),z);
		chassis->GetRobotDrive()->ArcadeDrive(y,-z,false);
		chassis->GetMiddleMotor()->SetSpeed(0);
		//chassis->GetRobotDrive()->ArcadeDrive(oi->GetDriverStick(),Y_CHANNEL,oi->GetDriverStick(),Z_CHANNEL);
		//chassis->GetRobotDrive()->TankDrive(z,-z,false);
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
