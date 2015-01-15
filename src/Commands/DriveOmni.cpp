#include "DriveOmni.h"

DriveOmni::DriveOmni()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveOmni::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveOmni::Execute()
{
	int x = oi->getRightStick()->GetAxis(Joystick::kXAxis);
	chassis->GetMiddleWheel()->Set(x);
	int y = oi->getRightStick()->GetAxis(Joystick::kYAxis);
	chassis->GetRobotDrive()->TankDrive(y,y,false);
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
