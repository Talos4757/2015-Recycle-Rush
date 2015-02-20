#ifndef UndropLift_H
#define UndropLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class UndropLift: public CommandBase
{
public:
	UndropLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
