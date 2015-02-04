#ifndef AUTONOMOUS_PICKER_H
#define AUTONOMOUS_PICKER_H

#include "../CommandBase.h"

class AutonomousDrive: public CommandBase {
public:
	AutonomousDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

