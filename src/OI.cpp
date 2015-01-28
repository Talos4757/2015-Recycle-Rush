#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveRotate.h"
#include "Commands/HeightSetter.h"
#include "Commands/DriveArcade.h"

OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);
	this->RotateButton=new JoystickButton(leftStick,6);
	ArcadeButton = new JoystickButton(rightStick,2);
	this->LifterUp=new JoystickButton(rightStick,8);
	this->LifterDown=new JoystickButton(rightStick,9);
	this->Open=new JoystickButton(rightStick,2);
	this->Close=new JoystickButton(rightStick,1);
	RotateButton->WhileHeld(new DriveRotate());
	LifterUp->WhileHeld(new HeightSetter(1.0f));
	LifterDown->WhileHeld(new HeightSetter(-1.0f));
	ArcadeButton->WhileHeld(new DriveArcade());
	Open->WhileHeld(new PickerPos(1.0f));
	Close->WhileHeld(new PickerPos(-1.0f));
}
Joystick *OI::getLeftStick()
{
	return this->leftStick;
}
Joystick *OI::getRightStick()
{
	return this->rightStick;
}
