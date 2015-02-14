#include "Lift.h"
#include "../RobotMap.h"
#include "../Commands/LiftSetter.h"

Lift::Lift() : Subsystem("Lift")
{
	this->LiftMotor = new Victor(LIFT_ENGINE);
	this->LiftEncoder = new Encoder(LIFT_ENCODER_ONE,LIFT_ENCODER_TWO);
	this->UpLimit = new DigitalInput(LIFT_UP_LIMITER);
	this->BottomLimit = new DigitalInput(LIFT_BOTTOM_LIMITER);

	this->LiftEncoder->Reset();
}

void Lift::InitDefaultCommand()
{
	SetDefaultCommand(new LiftSetter());
}

Victor* Lift::GetLiftMotor()
{
	return this->LiftMotor;
}

bool Lift::IsTopmost()
{
	return !this->UpLimit->Get();
}

bool Lift::IsDownmost()
{
	return !this->BottomLimit->Get();
}

float Lift::GetHeight()
{
	return 0;
}

Encoder *Lift::GetLiftEncoder()
{
	return this->LiftEncoder;
}
