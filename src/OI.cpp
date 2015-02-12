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

	//this->ArcadeMode = new JoystickButton(rightStick,2);
	//this->Fast=new JoystickButton(rightStick,1);
	//this->LifterUp=new JoystickButton(leftStick,11);
	//this->LifterDown=new JoystickButton(leftStick,10);

	this->OpenGrip = new JoystickButton(leftStick,4);
	this->CloseGrip = new JoystickButton(leftStick,5);

	OpenGrip->WhileHeld(new GripSetter(1.0f));
	CloseGrip->WhileHeld(new GripSetter(-1.0f));

	//ArcadeMode->WhenPressed(new DriveArcade());
	//LifterUp->WhileHeld(new LiftSetter(0.5f));
	//LifterDown->WhileHeld(new LiftSetter(-0.5f));
	//Fast->WhileHeld(new DriveOmni());

}

Joystick *OI::GetLeftStick()
{
	return this->leftStick;
}
Joystick *OI::GetRightStick()
{
	return this->rightStick;
}
