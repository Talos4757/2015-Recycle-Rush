#include "AutoCommandGroup.h"
#include "AutoDrive.h"
#include "AutoDown.h"

#define DRIVETIMEOUT 3

AutoCommandGroup::AutoCommandGroup()
{
	AddParallel(new AutoDown());
	AddSequential(new AutoDrive(),DRIVETIMEOUT);
}
