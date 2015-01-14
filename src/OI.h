#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *leftStick, *rightStick;
	const int LEFT_JOYSTICK = 1;
	const int RIGHT_JOYSTICK = 2;
public:
	OI();
	Joystick* getLeftStick();
	Joystick* getRightStick();
	JoystickButton* RotateButton;
	JoystickButton* LifterUp;
	JoystickButton* LifterDown;
};

#endif
