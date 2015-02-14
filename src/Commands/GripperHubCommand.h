#ifndef GripperHubCommand_H
#define GripperHubCommand_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"
#include "../CommandBase.h"
class GripperHubCommand: public CommandBase
{
public:
	GripperHubCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
