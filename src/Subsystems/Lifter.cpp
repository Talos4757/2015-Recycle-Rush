#include "Lifter.h"
#include "../RobotMap.h"
#include "../Commands/HeightSetter.h"

Lifter::Lifter() : Subsystem("Lifter")
{
	this->LiftEngine= new Talon(LIFT_ENGINE);
}

void Lifter::InitDefaultCommand()
{
	SetDefaultCommand(new HeightSetter(0.0f));

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Lifter::SetHeight(float speed)
{}

