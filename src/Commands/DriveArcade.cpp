#include "DriveArcade.h"

DriveArcade::DriveArcade()
{

	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveArcade::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveArcade::Execute()
{
	chassis->GetRobotDrive()->ArcadeDrive(oi->getRightStick(),false);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveArcade::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveArcade::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveArcade::Interrupted()
{

}
