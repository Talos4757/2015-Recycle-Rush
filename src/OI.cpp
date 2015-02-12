#include <Commands/DriveOmni3D.h>
#include "OI.h"
#include "RobotMap.h"
#include "Commands/GripSetter.h"
#include "Commands/LiftSetter.h"
#include "Commands/DriveArcade.h"
#include "Commands/SlowOmni.h"
OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);

	this->LifterUp=new JoystickButton(leftStick,11);
	this->LifterDown=new JoystickButton(leftStick,10);

	this->OpenGrip = new JoystickButton(leftStick,6);
	this->CloseGrip = new JoystickButton(leftStick,4);

	LifterUp->WhenPressed(new LiftSetter(0.5f));
	LifterUp->WhenReleased(new LiftSetter(0.0f));

	LifterDown->WhenPressed(new LiftSetter(-0.5f));
	LifterDown->WhenReleased(new LiftSetter(0.0f));

	OpenGrip->WhenPressed(new GripSetter(-1.0f));
	OpenGrip->WhenReleased(new GripSetter(0.0f));

	CloseGrip->WhenPressed(new GripSetter(-1.0f));
	CloseGrip->WhenReleased(new GripSetter(0.0f));
}

Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
