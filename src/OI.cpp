#include "OI.h"

OI::OI()
{
	this->Driver_LeftStick = new Joystick(DRIVE_LEFT_JOYSTICK);
	this->Lifter_RightStick = new Joystick(LIFTER_RIGHT_JOYSTICK);
}

Joystick *OI::GetDriverStick()
{
	return this->Driver_LeftStick;
}
Joystick *OI::GetLifterStick()
{
	return this->Lifter_RightStick;
}
