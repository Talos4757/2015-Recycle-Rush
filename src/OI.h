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
	Joystick* getLeftStick();
	Joystick* getRightStick();
	JoystickButton* ArcadeButton;
	JoystickButton* RotateButton;
	JoystickButton* LifterUp;
	JoystickButton* LifterDown;
	JoystickButton* Open;
	JoystickButton* Close;
};

#endif
