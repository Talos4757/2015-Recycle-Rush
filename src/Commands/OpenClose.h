#ifndef OPENCLOSE_H
#define OPENCLOSE_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class OpenClose:  public CommandGroup
{
public:
	OpenClose();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* AutoCommand_H_ */
