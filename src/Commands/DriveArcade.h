#ifndef DRIVEARCADE_H_
#define DRIVEARCADE_H_

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class DriveArcade: public CommandBase
{
public:
	DriveArcade();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* DRIVEARCADE_H_ */
