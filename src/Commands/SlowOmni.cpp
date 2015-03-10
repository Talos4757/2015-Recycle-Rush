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
	float y = oi->GetDriverStick()->GetY();
	if(y>0)
		y = Helper::ReMap(ValueRange(0,1), ValueRange(0,0.8),y);
	else
		y = Helper::ReMap(ValueRange(0,-1), ValueRange(0,-0.8),y);
	float x = oi->GetDriverStick()->GetX();
	if(x>0)
		x = Helper::ReMap(ValueRange(0,1), ValueRange(0,0.8),x);
	else
		x = Helper::ReMap(ValueRange(0,-1), ValueRange(0,-0.8),x);
	float z = oi->GetDriverStick()->GetTwist();

	if(z > -ZDEADZONE && z < ZDEADZONE)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,false);
		chassis->GetMiddleMotor()->SetSpeed(Helper::IncreaseSpeed(x,1));
	}
	else
	{
		if(z<0)
					z = Helper::ReMap(ValueRange(-ZDEADZONE,-1),ValueRange(0,-1),z);
				else
					z = Helper::ReMap(ValueRange(ZDEADZONE,1),ValueRange(0,1),z);
		z=Helper::IncreaseSpeed(z,2);
		chassis->GetRobotDrive()->ArcadeDrive(y,-z,false);
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




