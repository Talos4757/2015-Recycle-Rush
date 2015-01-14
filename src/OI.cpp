#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveRotate.h"
#include "Commands/HeightSetter.h"

OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);
	this->RotateButton=new JoystickButton(leftStick,6);
	RotateButton->WhileHeld(new DriveRotate());
	this->LifterUp=new JoystickButton(rightStick,8);
	LifterUp->WhileHeld(new HeightSetter(1.0f));
	this->LifterDown=new JoystickButton(rightStick,9);
	LifterDown->WhileHeld(new HeightSetter(-1.0f));
}
Joystick *OI::getLeftStick()
{
	return this->leftStick;
}
Joystick *OI::getRightStick()
{
	return this->rightStick;
}
