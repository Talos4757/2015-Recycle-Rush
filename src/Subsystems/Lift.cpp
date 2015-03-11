#include "Lift.h"
#include "../RobotMap.h"
#include "../Commands/LiftSetter.h"

Lift::Lift() : Subsystem("Lift")
{
	this->LiftMotor = new Victor(LIFT_ENGINE);
	LiftMotor->SetExpiration(0.3);
	//this->LiftEncoder = new Encoder(LIFT_ENCODER_ONE,LIFT_ENCODER_TWO);
	this->UpLimit = new DigitalInput(LIFT_UP_LIMITER);
	this->BottomLimit = new DigitalInput(LIFT_BOTTOM_LIMITER);
	this->Switches=true;
	//this->LiftEncoder->Reset();
	//this->LiftEncoder->SetDistancePerPulse(2 * M_PI * RADIUS);
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
	if(this->IsDownmost())
	{
		this->LiftEncoder->Reset();
	}

	return this->LiftEncoder->GetDistance();
}

Encoder *Lift::GetLiftEncoder()
{
	return NULL;//this->LiftEncoder;
}
bool Lift::GetBoolean()
{
	return this->Switches;
}
void Lift::SwitchBoolean()
{
	this->Switches=!this->Switches;
}
