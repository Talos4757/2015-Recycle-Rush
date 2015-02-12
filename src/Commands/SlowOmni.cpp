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
	//SmartDashboard::PutNumber("First Length:",chassis->GetDor()->GetRangeMM()*10);
	//SmartDashboard::PutNumber("Second Length:",chassis->GetDor2()->GetRangeMM()*10);
	float y=(oi->GetRightStick()->GetY())/2;
	float x=(oi->GetLeftStick()->GetX())/2;
	chassis->GetRobotDrive()->TankDrive(y,y,false);
	chassis->GetMiddleMotor()->SetSpeed(x);
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




