/*
 * SlowOmni.h
 *
 *  Created on: 11 αταψ 2015
 *      Author: User
 */

#ifndef SLOW_OMNI_H
#define SLOW_OMNI_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class SlowOmni: public CommandBase
{
public:
	SlowOmni();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};




#endif /* SRC_COMMANDS_SLOWOMNI_H_ */
