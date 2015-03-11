#include "RemoveSwitches.h"

RemoveSwitches::RemoveSwitches()
{
	Requires(gripper);
}
void RemoveSwitches::Initialize()
{
}

void RemoveSwitches::Execute()
{
	gripper->SwitchSwitches();
}

bool RemoveSwitches::IsFinished()
{
return	false;
	//return gripper->IsFullyOpened();
}

void RemoveSwitches::End()
{

}

void RemoveSwitches::Interrupted()
{
	End();
}




