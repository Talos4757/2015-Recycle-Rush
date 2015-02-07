#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *leftStick, *rightStick;
	const int LEFT_JOYSTICK = 0;
	const int RIGHT_JOYSTICK = 1;

public:
	OI();
	Joystick* GetLeftStick();
	Joystick* GetRightStick();

	JoystickButton* LifterUp;
	JoystickButton* LifterDown;
	JoystickButton* OpenGrip;
	JoystickButton* CloseGrip;
};

#endif
