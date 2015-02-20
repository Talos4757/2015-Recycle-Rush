#include "AutoDown.h"
#include "CloseGripperFull.h"
#include "DropLift.h"

AutoDown::AutoDown()
{
	AddSequential(new CloseGripperFull());
	AddSequential(new DropLift());
}
