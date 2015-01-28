#include "DriveOmni.h"

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
	float x = oi->getRightStick()->GetAxis(Joystick::kXAxis);
	chassis->GetMiddleFront()->SetSpeed(x);
	chassis->GetMiddleRear()->SetSpeed(x);
	float y = oi->getRightStick()->GetAxis(Joystick::kYAxis);
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
