#ifndef DropLift_H
#define DropLift_H

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
