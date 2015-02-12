#include "Lift.h"
#include "../RobotMap.h"
#include "../Commands/LiftSetter.h"

Lift::Lift() : Subsystem("Lift")
{
	this->LiftMotor = new Talon(LIFT_ENGINE);
	this->e=new Encoder(1,2,true);
//	this->UpLimit=new DigitalInput(UP);
	//this->Bottom=new DigitalInput(DOWN);
}

void Lift::InitDefaultCommand()
{
	SetDefaultCommand(new LiftSetter());
}

Talon *Lift::GetLiftMotor()
{
	return this->LiftMotor;
}
Encoder* Lift::GetEnc()
{
	return this->e;
}
