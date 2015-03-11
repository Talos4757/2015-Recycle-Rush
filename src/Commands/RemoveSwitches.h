#ifndef REMOVE_SWITCHES_H
#define REMOVE_SWITCHES_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"
#include "../CommandBase.h"
class RemoveSwitches: public CommandBase
{
public:
	RemoveSwitches();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
