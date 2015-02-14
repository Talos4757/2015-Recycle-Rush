#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "RobotMap.h"

class OI
{
private:
	const int DRIVE_LEFT_JOYSTICK = 0;
	const int LIFTER_RIGHT_JOYSTICK = 1;
	Joystick *Driver_LeftStick, *Lifter_RightStick;
	JoystickButton *DropLift, *UndropLift, *FastDrive, *OpenGripper,*AutonDown;

public:
	OI();
	Joystick* GetLifterStick();
	Joystick* GetDriverStick();

	JoystickButton* LifterUp;
	JoystickButton* LifterDown;
	JoystickButton* OpenGrip;
	JoystickButton* CloseGrip;


};

#endif
