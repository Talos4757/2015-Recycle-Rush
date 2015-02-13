/*
 * SlowOmni.cpp
 *
 *  Created on: 11 αταψ 2015
 *      Author: User
 */
#include "SlowOmni.h"

SlowOmni::SlowOmni()
{
	Requires(chassis);
}

void SlowOmni::Initialize()
{
}

void SlowOmni::Execute()
{
	float y = (oi->GetDriverStick()->GetY())/2;
	float x = (oi->GetDriverStick()->GetX())/2;
	chassis->GetRobotDrive()->TankDrive(y,y,false);
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




