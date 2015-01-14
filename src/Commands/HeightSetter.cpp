#include "HeightSetter.h"

HeightSetter::HeightSetter(float speed)
{
	Requires(lifter);
	this->speed=speed;
}

// Called just before this Command runs the first time
void HeightSetter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void HeightSetter::Execute()
{
	lifter->SetHeight(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool HeightSetter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void HeightSetter::End()
{
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HeightSetter::Interrupted()
{

}
