#include "RemoveSwitches2.h"

RemoveSwitches2::RemoveSwitches2()
{
	Requires(lift);
}
void RemoveSwitches2::Initialize()
{
}

void RemoveSwitches2::Execute()
{
	lift->SwitchBoolean();
}

bool RemoveSwitches2::IsFinished()
{
	return false;
}

void RemoveSwitches2::End()
{

}

void RemoveSwitches2::Interrupted()
{
	End();
}




