#include "RemoveSwitches2.h"
#include "RemoveSwitches.h"
#include "Switcher.h"
Switcher::Switcher()
{
	AddParallel(new RemoveSwitches());
	AddParallel(new RemoveSwitches2());
}
