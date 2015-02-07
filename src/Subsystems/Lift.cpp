#include "Lift.h"
#include "../RobotMap.h"
#include "../Commands/LiftSetter.h"

Lift::Lift() : Subsystem("Lift")
{
	this->LiftMotor = new Talon(LIFT_ENGINE);
}

void Lift::InitDefaultCommand()
{
	SetDefaultCommand(new LiftSetter(1));
}

Talon *Lift::GetLiftMotor()
{
	return this->LiftMotor;
}
