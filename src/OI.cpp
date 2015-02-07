#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveOmni.h"
#include "Commands/GripSetter.h"
#include "Commands/LiftSetter.h"
#include "Commands/DriveArcade.h"

OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);

	this->ArcadeMode = new JoystickButton(rightStick,2);

	this->LifterUp=new JoystickButton(leftStick,11);
	this->LifterDown=new JoystickButton(leftStick,10);

	this->OpenGrip = new JoystickButton(leftStick,8);
	this->CloseGrip = new JoystickButton(leftStick,9);

	ArcadeMode->WhenPressed(new DriveArcade());
	LifterUp->WhileHeld(new LiftSetter(0.5f));
	LifterDown->WhileHeld(new LiftSetter(-0.5f));
	LifterUp->WhenReleased(new LiftSetter(0.0f));
	LifterDown->WhenReleased(new LiftSetter(0.0f));

	OpenGrip->ToggleWhenPressed(new GripSetter(0.6f));
	CloseGrip->ToggleWhenPressed(new GripSetter(-0.6f));
}

Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
