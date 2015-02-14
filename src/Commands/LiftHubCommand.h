#ifndef LiftHubCommand_H
#define LiftHubCommand_H

#include "Commands/CommandGroup.h"
#include "../CommandBase.h"
#include "WPILib.h"

class LiftHubCommand: public CommandBase
{
public:
	LiftHubCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
