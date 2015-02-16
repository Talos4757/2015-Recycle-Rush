#include "OI.h"
#include "Commands/AutoDown.h"
#include "Commands/DriveOmni3D.h"
#include "Commands/DropLift.h"
#include "Commands/UndropLift.h"
#include "Commands/SlowOmni.h"
#include "Commands/OpenClose.h"

OI::OI()
{
	this->Driver_LeftStick = new Joystick(DRIVE_LEFT_JOYSTICK);
	this->Lifter_RightStick = new Joystick(LIFTER_RIGHT_JOYSTICK);

	this->AutonDown = new JoystickButton(this->GetLifterStick(),1);
	this->AutonDown->WhenPressed(new AutoDown());

	this->SlowDrive = new JoystickButton(this->GetDriverStick(),1);
	//this->SlowDrive->WhenPressed(new DriveOmni3D());
	//this->SlowDrive->WhenReleased(new SlowOmni());
	this->SlowDrive->WhileHeld(new DriveOmni3D());
	//this->DropLiftBtn = new JoystickButton(this->GetLifterStick(),2);
	//this->DropLiftBtn->WhenPressed(new DropLift);

	this->OpenCloseCommand = new JoystickButton(this->GetLifterStick(),2);
	this->OpenCloseCommand->WhenPressed(new OpenClose());
}

Joystick *OI::GetDriverStick()
{
	return this->Driver_LeftStick;
}
Joystick *OI::GetLifterStick()
{
	return this->Lifter_RightStick;
}
