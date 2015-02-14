/*
 * SlowOmni.cpp
 *
 *  Created on: 11 αταψ 2015
 *      Author: User
 */
#include "SlowOmni.h"
#define X_CHANNEL 0
#define Y_CHANNEL 1
#define Z_CHANNEL 2
SlowOmni::SlowOmni()
{
	Requires(chassis);
}

void SlowOmni::Initialize()
{
}

void SlowOmni::Execute()
{
	float y = oi->GetDriverStick()->GetY()/2;
	float x = oi->GetDriverStick()->GetX()/2;
	float z = oi->GetDriverStick()->GetTwist();

	if(z && z < 0.1)
	{
		//This means that the cartesian drive is taking place (no Z axis)
		chassis->GetRobotDrive()->TankDrive(y,y,true);
		chassis->GetMiddleMotor()->SetSpeed(x);
	}
	else
	{
		chassis->GetRobotDrive()->ArcadeDrive(oi->GetDriverStick()->GetRawAxis(Y_CHANNEL),-oi->GetDriverStick()->GetRawAxis(Z_CHANNEL));
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




