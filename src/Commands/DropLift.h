#ifndef DROP_LIFT_H_
#define DROP_LIFT_H_

#include "../CommandBase.h"
#include "WPILib.h"

class DropLift: public CommandBase
{
public:
	DropLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
