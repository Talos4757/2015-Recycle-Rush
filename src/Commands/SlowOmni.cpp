/*
 * SlowOmni.cpp
 *
 *  Created on: 11 αταψ 2015
 *      Author: User
 */
#include "SlowOmni.h"
#include "../Helper.h"
#define X_CHANNEL 0
#define Y_CHANNEL 1
#define Z_CHANNEL 2

#define ZDEADZONE 0.25f

SlowOmni::SlowOmni()
{
	Requires(chassis);
}

void SlowOmni::Initialize()
{
}

void SlowOmni::Execute()
{
	SmartDashboard::PutBoolean("DrivingSlow",true);
	float y = oi->GetDriverStick()->GetY();
	float x = oi->GetDriverStick()->GetX();
	float z = oi->GetDriverStick()->GetTwist();

	if(z > -ZDEADZONE && z < ZDEADZONE)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,true);
		chassis->GetMiddleMotor()->SetSpeed(Helper::IncreaseSpeed(x,2));
	}
	else
	{
		if(z<0)
					z = Helper::ReMap(ValueRange(-ZDEADZONE,-1),ValueRange(0,-1),z);
				else
					z = Helper::ReMap(ValueRange(ZDEADZONE,1),ValueRange(0,1),z);
		chassis->GetRobotDrive()->ArcadeDrive(y,-z,true);
		chassis->GetMiddleMotor()->SetSpeed(0);

	}
}


bool SlowOmni::IsFinished()
{
	return false;
}

void SlowOmni::End()
{
	Cancel();
}

void SlowOmni::Interrupted()
{
	End();
}




