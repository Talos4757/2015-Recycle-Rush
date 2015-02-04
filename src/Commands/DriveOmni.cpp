#include "DriveOmni.h"
#include "../RobotMap.h"

DriveOmni::DriveOmni()
{
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveOmni::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveOmni::Execute()
{
	float x = oi->getRightStick()->GetX();
	float y = oi->getRightStick()->GetY();

	float moveVal = oi->getRightStick()->GetRawAxis(0);
	float rotVal = oi->getRightStick()->GetRawAxis(1);

	SmartDashboard::PutNumber("X",x);
	SmartDashboard::PutNumber("Y",y);

	if(DriverStation::GetInstance()->GetStickButton(1,2))
	{
		chassis->GetRobotDrive()->TankDrive(-y,-y,true);
		chassis->GetMiddleFront()->SetSpeed(-x);
		chassis->GetMiddleRear()->SetSpeed(-x);
	}
	else
	{
		chassis->GetRobotDrive()->ArcadeDrive(-moveVal,-rotVal,true);
	}

}

// Make this return true when this Command no longer needs to run execute()
bool DriveOmni::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveOmni::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveOmni::Interrupted()
{

}
