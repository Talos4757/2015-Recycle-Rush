#ifndef DRIVEOMNI_H_
#define DRIVEOMNI_H_

#include "../CommandBase.h";
#include "SmartDashboard/SmartDashboard.h"

class DriveOmni: public CommandBase
{
public:
	DriveOmni();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* DRIVEOMNI_H_ */
