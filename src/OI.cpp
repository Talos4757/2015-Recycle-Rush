#include "OI.h"
#include "Commands/AutoDown.h"
#include "Commands/DriveOmni3D.h"
#include "Commands/DropLift.h"
#include "Commands/UndropLift.h"
#include "Commands/SlowOmni.h"

OI::OI()
{
	this->Driver_LeftStick = new Joystick(DRIVE_LEFT_JOYSTICK);
	this->Lifter_RightStick = new Joystick(LIFTER_RIGHT_JOYSTICK);

	this->AutonDown = new JoystickButton(this->GetLifterStick(),1);
	this->AutonDown->WhenPressed(new AutoDown());

	this->SlowDrive = new JoystickButton(this->GetDriverStick(),1);
	this->SlowDrive->WhenPressed(new SlowOmni());
	this->SlowDrive->WhenReleased(new DriveOmni3D());
	this->DropLiftBtn = new JoystickButton(this->GetLifterStick(),2);
	this->DropLiftBtn->WhenPressed(new DropLift);
}

Joystick *OI::GetDriverStick()
{
	return this->Driver_LeftStick;
}
Joystick *OI::GetLifterStick()
{
	return this->Lifter_RightStick;
}
