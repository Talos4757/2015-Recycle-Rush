#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveOmni.h"
#include "Commands/GripSetter.h"
#include "Commands/LiftSetter.h"

OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);

	this->LifterUp=new JoystickButton(rightStick,8);
	this->LifterDown=new JoystickButton(rightStick,9);

	this->OpenGrip = new JoystickButton(rightStick,2);
	this->CloseGrip = new JoystickButton(rightStick,1);

	LifterUp->WhileHeld(new LiftSetter(0.01));
	LifterDown->WhileHeld(new LiftSetter(-0.5f));

	OpenGrip->WhileHeld(new GripSetter());
	CloseGrip->WhileHeld(new GripSetter());
}
Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
