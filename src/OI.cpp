#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// Process operator interface input here.
	leftStick = new Joystick(LEFT_JOYSTICK);
	rightStick = new Joystick(RIGHT_JOYSTICK);

}
Joystick *OI::getLeftStick()
{
	return leftStick;
}
Joystick *OI::getRightStick()
{
	return rightStick;
}
