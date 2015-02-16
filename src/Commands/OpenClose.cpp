#include "OpenClose.h"
#include "AutoShakshuka/AutoGripSetter.h"
#include "AutoShakshuka/AutoLiftSetter.h"

#define LIFT_SPEED 0.3f
#define GRIP_SPEED 0.3f

OpenClose::OpenClose()
{
	AddSequential(new AutoGripSetter(GRIP_SPEED,3));
	AddSequential(new AutoGripSetter(GRIP_SPEED,-3));
}

void OpenClose::Initialize()
{
}

void OpenClose::Execute()
{

}

bool OpenClose::IsFinished()
{
	return false;
}

void OpenClose::End()
{

}

void OpenClose::Interrupted()
{
	End();
}
