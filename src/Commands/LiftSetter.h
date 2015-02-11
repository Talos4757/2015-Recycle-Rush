#ifndef LIFT_SETTER_H_
#define LIFT_SETTER_H_

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class LiftSetter: public CommandBase
{
private:

public:
	LiftSetter();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* LIFTSETTER_H_ */
