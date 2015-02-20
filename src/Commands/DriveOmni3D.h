#ifndef DRIVEOMNI3D_H
#define DRIVEOMNI3D_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class DriveOmni3D: public CommandBase
{
private:
	float LimitMiddle(float x);
public:
	DriveOmni3D();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* DRIVEOMNI3D_H_ */
