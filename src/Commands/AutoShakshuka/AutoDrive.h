#ifndef AutoDrive_H_
#define AutoDrive_H_

#include "../../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class AutoDrive: public CommandBase
{
public:
	AutoDrive(float step);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	float step;
};


#endif /* AutoDrive_H_ */
