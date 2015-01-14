#include "DriveRotate.h"

DriveRotate::DriveRotate()
{
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveRotate::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveRotate::Execute()
{
chassis->GetRobotDrive()->ArcadeDrive(oi->getLeftStick());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveRotate::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveRotate::End()
{
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveRotate::Interrupted()
{

}
