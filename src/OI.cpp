#include "OI.h"
#include "RobotMap.h"
#include "Commands/DriveOmni.h"
#include "Commands/GripSetter.h"
#include "Commands/LiftSetter.h"
#include "Commands/DriveArcade.h"
#include "Commands/SlowOmni.h"
OI::OI()
{
	this->leftStick = new Joystick(LEFT_JOYSTICK);
	this->rightStick = new Joystick(RIGHT_JOYSTICK);

	this->ArcadeMode = new JoystickButton(rightStick,2);
	this->Fast=new JoystickButton(rightStick,1);
	//this->LifterUp=new JoystickButton(leftStick,11);
	//this->LifterDown=new JoystickButton(leftStick,10);

	this->OpenGrip = new JoystickButton(leftStick,6);
	this->CloseGrip = new JoystickButton(leftStick,4);

	ArcadeMode->WhenPressed(NULL);
	//LifterUp->WhileHeld(new LiftSetter(0.5f));
	//LifterDown->WhileHeld(new LiftSetter(-0.5f));
	Fast->WhenPressed(new DriveOmni());
	Fast->WhenReleased(new SlowOmni());
	/*OpenGrip->WhenPressed(new GripSetter(0.6f));
	OpenGrip->WhenReleased(new GripSetter(0.0f));
	CloseGrip->WhenPressed(new GripSetter(-0.6f));
	CloseGrip->WhenReleased(new GripSetter(0.0f));*/
}

Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
