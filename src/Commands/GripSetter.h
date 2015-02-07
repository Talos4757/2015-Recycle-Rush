#ifndef GRIP_SETTER_H_
#define GRIP_SETTER_H_

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class GripSetter: public CommandBase
{
private:
	float speed;

public:
	GripSetter();

	void SetSpeed(float s);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};


#endif /* GRIP_SETTER_H_ */
