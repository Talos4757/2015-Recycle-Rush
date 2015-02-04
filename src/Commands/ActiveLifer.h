#ifndef ACTIVE_LIFTER_H
#define ACTIVE_LIFTER_H


#include "../CommandBase.h"

class ActiveLifer: public CommandBase {
public:
	ActiveLifer();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

