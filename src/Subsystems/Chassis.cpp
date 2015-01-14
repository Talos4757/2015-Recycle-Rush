#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DriveOmni.h"

Chassis::Chassis() : Subsystem("Chassis")
{
	middlewheel = new Talon(MIDDLE_MOTOR);
	this->fl=new Talon(FRONT_LEFT_MOTOR);
	this->fr=new Talon(FRONT_RIGHT_MOTOR);
	this->rr=new Talon(REAR_RIGHT_MOTOR);
	this->rl=new Talon(REAR_LEFT_MOTOR);
	robotdrive = new RobotDrive(fl,rl, fr, rr);
}

void Chassis::InitDefaultCommand()
{
	SetDefaultCommand(new DriveOmni());

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

Talon *Chassis::GetMiddleWheel()
{
	return middlewheel;
}
RobotDrive *Chassis::GetRobotDrive()
{
	return robotdrive;
}
