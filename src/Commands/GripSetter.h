#ifndef GRIP_SETTER_H_
#define GRIP_SETTER_H_

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class GripSetter: public CommandBase
{
private:
	float speed;

public:
	GripSetter(float s);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* GRIP_SETTER_H_ */
