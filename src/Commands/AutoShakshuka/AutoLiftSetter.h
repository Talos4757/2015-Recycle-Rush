#ifndef AUTO_LIFT_SETTER_H_
#define AUTO_LIFT_SETTER_H_

#include "../../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class AutoLiftSetter: public CommandBase
{
private:
	float speed;
	int step;
public:
	AutoLiftSetter(float s, int st);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};


#endif /* AutoLiftSetter_H_ */
