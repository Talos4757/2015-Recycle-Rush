#ifndef DRIVE_ARCADE_H
#define DRIVE_ARCADE_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveArcade: public CommandBase
{
public:
	DriveArcade();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
