#include "OI.h"
#include "Commands/AutoDown.h"
#include "Commands/DriveOmni3D.h"
OI::OI()
{
	this->Driver_LeftStick = new Joystick(DRIVE_LEFT_JOYSTICK);
	this->Lifter_RightStick = new Joystick(LIFTER_RIGHT_JOYSTICK);
	this->AutonDown=new JoystickButton(this->Lifter_RightStick,1);
	this->AutonDown->WhenPressed(new AutoDown);
	this->FastDrive=new JoystickButton(this->Driver_LeftStick,1);
	this->FastDrive->WhileHeld(new DriveOmni3D());

}

Joystick *OI::GetDriverStick()
{
	return this->Driver_LeftStick;
}
Joystick *OI::GetLifterStick()
{
	return this->Lifter_RightStick;
}
