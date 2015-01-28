#include "Lifter.h"
#include "../RobotMap.h"
#include "../Commands/HeightSetter.h"

Picker::Picker() : Subsystem("Picker")
{
	this->PickerEngine= new Talon(PICK_ENGINE);
}

void Lifter::InitDefaultCommand()
{
	SetDefaultCommand(new PickerPos(0.0f));

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Picker::SetPos(float speed)
{
	this->PickerEngine->SetSpeed(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

