#ifndef AutoCommand_H_
#define AutoCommand_H_

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class AutonCommand:  public CommandGroup
{
public:
	AutonCommand();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* AutoCommand_H_ */
