#include "Lifter.h"
#include "../RobotMap.h"
#include "../Commands/HeightSetter.h"

Lifter::Lifter() : Subsystem("Lifter")
{
	this->LiftEngine= new Talon(LIFT_ENGINE);
	this->e=new Encoder(ENCODER_FIRST,ENCODER_SECOND,true);
}

void Lifter::InitDefaultCommand()
{
	SetDefaultCommand(new HeightSetter(0.0f));

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Lifter::SetHeight(float speed)
{
	this->LiftEngine->SetSpeed(0.2);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.


