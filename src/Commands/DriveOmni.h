#ifndef DRIVE_OMNI_H
#define DRIVE_OMNI_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveOmni: public CommandBase
{
public:
	DriveOmni();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
