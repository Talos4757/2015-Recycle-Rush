#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DriveOmni.h"

Chassis::Chassis() : Subsystem("Chassis")
{
	this->mf = new Talon(MIDDLE_MOTOR_FRONT);
	this->mr=new Talon(MIDDLE_MOTOR_REAR);
	this->fl=new Talon(LEFT_MOTOR);
	this->fr=new Talon(RIGHT_MOTOR);

	robotdrive = new RobotDrive(fl,fr);

	robotdrive->SetInvertedMotor(static_cast<RobotDrive::MotorType>(RIGHT_MOTOR),true);
	robotdrive->SetInvertedMotor(static_cast<RobotDrive::MotorType>(LEFT_MOTOR),true);
}

void Chassis::InitDefaultCommand()
{
	SetDefaultCommand(new DriveOmni());

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

Talon *Chassis::GetMiddleFront()
{
	return mf;
}

Talon *Chassis::GetMiddleRear()
{
	return mr;
}
RobotDrive *Chassis::GetRobotDrive()
{
	return robotdrive;
}
