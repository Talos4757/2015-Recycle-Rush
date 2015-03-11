#include "OpenClose.h"
#include "AutoGripSetter.h"
#include "AutoLiftSetter.h"

#define GRIP_SPEED 1.0f

OpenClose::OpenClose()
{
	AddSequential(new AutoGripSetter(-GRIP_SPEED,0.06));
	AddSequential(new AutoGripSetter(GRIP_SPEED,0.06));
}
