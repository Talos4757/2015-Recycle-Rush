#include "HeightSetter.h"

PickerPos::PickerPos(float speed)
{
	Requires(picker);
	this->speed=speed;
}

// Called just before this Command runs the first time
void PickerPos::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PickerPos::Execute()
{
	picker->SetPos(this->speed);
}

// Make this return true when this Command no longer needs to run execute()
bool PickerPos::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PickerPos::End()
{
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickerPos::Interrupted()
{
	End();
}
