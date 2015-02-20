#ifndef AUTO_GRIP_SETTER_H_
#define AUTO_GRIP_SETTER_H_

#include "../../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class AutoGripSetter: public CommandBase
{
private:
	float speed;
	float step;

public:
	AutoGripSetter(float s, float st);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* GRIP_SETTER_H_ */
