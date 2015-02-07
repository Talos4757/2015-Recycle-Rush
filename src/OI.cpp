#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveOmni.h"
#include "Commands/GripSetter.h"
#include "Commands/LiftSetter.h"

OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);

	this->LifterUp=new JoystickButton(rightStick,11);
	this->LifterDown=new JoystickButton(rightStick,10);

	this->OpenGrip = new JoystickButton(rightStick,8);
	this->CloseGrip = new JoystickButton(rightStick,9);

	LifterUp->WhileHeld(new LiftSetter(0.5f));
	LifterDown->WhileHeld(new LiftSetter(-0.5f));
	LifterUp->WhenReleased(new LiftSetter(0.0f));
	LifterDown->WhenReleased(new LiftSetter(0.0f));
	OpenGrip->WhileHeld(new GripSetter(0.45f));
	CloseGrip->WhileHeld(new GripSetter(-0.45f));
}

Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
