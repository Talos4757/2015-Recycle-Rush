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
	/*double speed_step = this->speed / 20;
	double speed_counter = 0;
	for(int i = 0; i < 20; i++)
	{
		if(speed_counter + speed != 1.0f)
		{
			lifter->SetHeight(speed_counter + speed);
			speed_counter += speed_step;
		}
	}*/
	lifter->SetHeight(this->speed);
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
