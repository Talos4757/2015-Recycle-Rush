#ifndef OI_H_
#define OI_H_

#include "WPILib.h"
#include "RobotMap.h"

class OI
{
private:
	const int DRIVE_LEFT_JOYSTICK = 0;
	const int LIFTER_RIGHT_JOYSTICK = 1;
	Joystick *Driver_LeftStick, *Lifter_RightStick;
	JoystickButton *DropLiftBtn, *SlowDrive, *AutonDown, *OpenCloseCommand, *Switcherrrr;

public:
	OI();
	Joystick* GetLifterStick();
	Joystick* GetDriverStick();
};

#endif
