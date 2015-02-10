#ifndef AutoDrive_H_
#define AutoDrive_H_

#include "../../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class AutoDrive: public CommandBase
{
public:
	AutoDrive(int step);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	int step;
};


#endif /* AutoDrive_H_ */
