#include "Vagina.h"
#include "../RobotMap.h"
#include "../Commands/VaginaRotate.h"

Vagina::Vagina() : Subsystem("Vagina")
{
	vaginaRight= new Talon(VAGINA_MOTOR_RIGHT);
	vaginaLeft=new Talon (VAGINA_MOTOR_LEFT);
}

void Vagina::InitDefaultCommand()
{
	SetDefaultCommand(new VaginaRotate(Idle));

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.


void Vagina::MotorIn(float speed)
{
this->vaginaRight->Set(speed);
this->vaginaLeft->Set(speed);
}
void Vagina::MotorOut(float speed)
{
	this->vaginaRight->Set(-speed);
	this->vaginaLeft->Set(-speed);
}
void Vagina::RotateRight(float speed)
{
	this->vaginaRight->Set(speed);
	this->vaginaLeft->Set(-speed);
}
void Vagina::RotateLeft(float speed)
{
	this->vaginaRight->Set(-speed);
	this->vaginaLeft->Set(speed);
}
