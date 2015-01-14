#include "VaginaRotate.h"

VaginaRotate::VaginaRotate(Direction dir)
{
	this->dir = dir;
	Requires(vagina);
}

// Called just before this Command runs the first time
void VaginaRotate::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void VaginaRotate::Execute()
{
	switch (dir){
	case Right:
		vagina->RotateRight(SPEED);
		break;
	case Left:
		vagina->RotateLeft(SPEED);
		break;
	case In:
		vagina->MotorIn(2*SPEED);
		break;
	case Out:
		vagina->MotorOut(2*SPEED);
		break;

	default :
		vagina->MotorIn(0.0f);
	}

}

// Make this return true when this Command no longer needs to run execute()
bool VaginaRotate::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void VaginaRotate::End()
{
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void VaginaRotate::Interrupted()
{

}
