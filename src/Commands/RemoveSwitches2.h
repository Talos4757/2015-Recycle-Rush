#ifndef REMOVE_SWITCHES2_H
#define REMOVE_SWITCHES2_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"
#include "../CommandBase.h"
class RemoveSwitches2: public CommandBase
{
public:
	RemoveSwitches2();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
