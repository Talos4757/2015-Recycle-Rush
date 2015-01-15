#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DriveOmni.h"

Chassis::Chassis() :
		Subsystem("Chassis")
{
	robotdrive = new RobotDrive(FRONT_LEFT_MOTOR, REAR_LEFT_MOTOR, FRONT_RIGHT_MOTOR, REAR_RIGHT_MOTOR);
	middlewheel = new Talon(MIDDLE_MOTOR);
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
