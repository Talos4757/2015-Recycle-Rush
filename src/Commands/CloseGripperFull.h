#ifndef CLOSE_GRIPPER_FULL_H_
#define CLOSE_GRIPPER_FULL_H_

#include "Commands/CommandGroup.h"
#include "WPILib.h"
#include "../CommandBase.h"
class CloseGripperFull: public CommandBase
{
public:
	CloseGripperFull();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
