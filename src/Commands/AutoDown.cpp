#include "AutoDown.h"
#include "GripperHubCommand.h"
#include "LiftHubCommand.h"
AutoDown::AutoDown()
{
	AddSequential(new GripperHubCommand);
	AddSequential(new LiftHubCommand);
}
