#include "Lift.h"
#include "../RobotMap.h"
#include "../Commands/LiftSetter.h"

Lift::Lift() : Subsystem("Lift")
{
	this->LiftMotor = new Talon(LIFT_ENGINE);

	this->UpLimit = new DigitalInput(LIFT_UP_LIMITER);
	this->BottomLimit = new DigitalInput(LIFT_BOTTOM_LIMITER);
}

void Lift::InitDefaultCommand()
{
	SetDefaultCommand(new LiftSetter(0.0f));
}

Talon* Lift::GetLiftMotor()
{
	return this->LiftMotor;
}

bool Lift::IsTopmost()
{
	return this->UpLimit->Get();
}

bool Lift::IsDownmost()
{
	return this->BottomLimit->Get();
}
