#include "OpenClose.h"
#include "AutoShakshuka/AutoGripSetter.h"
#include "AutoShakshuka/AutoLiftSetter.h"

#define GRIP_SPEED 1.0f

OpenClose::OpenClose()
{
	AddSequential(new AutoGripSetter(-GRIP_SPEED,0.06));
	AddSequential(new AutoGripSetter(GRIP_SPEED,0.06));
}
